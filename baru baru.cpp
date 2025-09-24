#include <iostream>
#include <vector>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int r, c;
    cin >> r >> c;
    vector<string> tetris(r);

    for (int i = 0; i < r; i++) {
        cin >> tetris[i];
    }

    bool changed = true;
    while (changed) {
        changed = false;
        int bottom = -1;

        // Mencari baris terbawah yang semuanya adalah '0'
        for (int i = 0; i < r; i++) {
            bool allZero = true;
            for (int j = 0; j < c; j++) {
                if (tetris[i][j] != '0') {
                    allZero = false;
                    break;
                }
            }
            if (allZero) {
                bottom = i;
            }
        }

        if (bottom != -1) {
            // Jika ada baris terbawah yang semuanya '0', ubah semua '1' di atasnya menjadi '0'
            changed = true;
            for (int i = 0; i < c; i++) {
                for (int j = bottom - 1; j >= 0; j--) {
                    if (tetris[j][i] == '1') {
                        tetris[j][i] = '0';
                    }
                }
            }
        }
    }

    // Cetak hasil tetris
    for (int i = 0; i < r; i++) {
        cout << tetris[i] << endl;
    }

    return 0;
}
