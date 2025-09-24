#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
    	string empty_line;
        getline(cin, empty_line);
        vector<string> maze(8); // Mendeklarasikan vektor dengan satu tipe data saja
        for (int i = 0; i < 8; i++) {
            cin >> maze[i];
        }

        char a = ' '; // Deklarasi dan inisialisasi variabel karakter
        bool ketemu = false; // Deklarasi dan inisialisasi variabel ketemu
        bool sebaris = false;
        for (int i = 0; i < 8; i++) {
            sebaris = true;
            for (int j = 0; j < 8; j++) {
                if (maze[i][j] != '.') {
                    a = maze[i][j];
                    for (int x = 0; x < 8; x++) {
                        if (maze[i][x] != a) {
                            sebaris = false;
                            break;
                        }
                    }
                    if (sebaris) {
                        ketemu = true;
                        break;
                    }
                }
            }
            if (ketemu) {
                break;
            }
        }

        if (!ketemu) {
            for (int i = 0; i < 8; i++) {
                sebaris = true;
                for (int j = 0; j < 8; j++) {
                    if (maze[j][i] != '.') {
                        a = maze[j][i];
                        for (int x = 0; x < 8; x++) {
                            if (maze[x][i] != a) {
                                sebaris = false;
                                break;
                            }
                        }
                        if (sebaris) {
                            ketemu = true;
                            break;
                        }
                    }
                }
                if (ketemu) {
                    break;
                }
            }
        }
        if (ketemu) {
            cout << a << endl;
        }
    }
    return 0;
}
