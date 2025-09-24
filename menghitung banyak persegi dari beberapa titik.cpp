#include <iostream>
using namespace std;

long long countSquares(int n, int m) {
    long long totalSquares = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            totalSquares += min(n - i + 1, m - j + 1);
        }
    }
    return totalSquares;
}

int main() {
    int n, m;
    cout << "Masukkan nilai N dan M: ";
    cin >> n >> m;

    long long totalSquares = countSquares(n, m);
    cout << "Banyaknya persegi yang dapat dibentuk dari " << n << "x" << m << " titik adalah: " << totalSquares << endl;

    return 0;
}
