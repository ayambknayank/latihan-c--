#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

const int width = 20;
const int height = 17;

bool gameover;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;

void Setup() {
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0; // Initialize tail length
}

void Draw() {
    system("clear || cls"); 
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1)
                cout << "#"; // walls
            else if (i == y && j == x)
                cout << "*"; // snake head
            else if (i == fruitY && j == fruitX)
                cout << "%"; // fruit
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "*"; // snake tail
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input() {
    if (cin.peek() != EOF) {
        switch (cin.get()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameover = true;
                break;
        }
    }
}

void Move() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:
            x = (x - 1 + width) % width;
            break;
        case RIGHT:
            x = (x + 1) % width;
            break;
        case UP:
            y = (y - 1 + height) % height;
            break;
        case DOWN:
            y = (y + 1) % height;
            break;
        default:
            break;
    }
}

void CheckCollision() {
    // Check for collision with the walls
    if (x == 0 || x == width - 1 || y == 0 || y == height - 1) {
        gameover = true;
    }
    // Check for collision with the tail
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameover = true;
}

void CheckFruit() {
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % (width - 2) + 1; // Ensure fruit spawns within bounds
        fruitY = rand() % (height - 2) + 1; // Ensure fruit spawns within bounds
        nTail++;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    Setup();

    while (!gameover) {
        Draw();
        Input();
        Move();
        CheckCollision();
        CheckFruit();
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Control speed
    }

    cout << "Game Over! Your final score is: " << score << endl;
    return 0;
}
