#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Mencetak matriks awal
    cout << "Matriks awal:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Menukar elemen matriks
    int temp = matrix[0][0];
    matrix[0][0] = matrix[2][2];
    matrix[2][2] = temp;

    temp = matrix[0][2];
    matrix[0][2] = matrix[2][0];
    matrix[2][0] = temp;

    // Mencetak matriks setelah elemen ditukar
    cout << endl << "Matriks setelah elemen ditukar:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}