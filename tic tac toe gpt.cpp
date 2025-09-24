#include <iostream>
#include <vector>
using namespace std;

bool hasWon(char player, const vector<string>& grid) {
    for (int i = 0; i < 3; i++) {
        if ((grid[i][0] == player && grid[i][1] == player && grid[i][2] == player) ||
            (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player)) {
            return true;
        }
    }

    if ((grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) ||
        (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player)) {
        return true;
    }

    return false;
}

bool isValidTicTacToe(const vector<string>& grid) {
    int countX = 0, countO = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == 'X') {
                countX++;
            } else if (grid[i][j] == 'O') {
                countO++;
            }
        }
    }

    if (!(countX == countO || countX == countO + 1)) {
        return false;
    }

    return !(hasWon('X', grid) && countX != countO + 1) && !(hasWon('O', grid) && countX != countO);
}

int main() {
    int N;
    cin >> N;

    for (int t = 0; t < N; t++) {
        vector<string> grid(3);
        for (int i = 0; i < 3; i++) {
            cin >> grid[i];
        }
        cout << (isValidTicTacToe(grid) ? "yes" : "no") << endl;
    }

    return 0;
}
