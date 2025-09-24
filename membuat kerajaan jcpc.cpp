#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> A(R, vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> sum(R + 1, vector<int>(C + 1, 0));
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + A[i-1][j-1];
        }
    }

    int maxKeuntungan = -100000 * R * C;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            for (int k = i; k <= R; k++) {
                for (int l = j; l <= C; l++) {
                    int keuntungan = sum[k][l] - sum[k][j-1] - sum[i-1][l] + sum[i-1][j-1];
                    maxKeuntungan = max(maxKeuntungan, keuntungan);
                }
            }
        }
    }

    cout << maxKeuntungan << endl;

    return 0;
}