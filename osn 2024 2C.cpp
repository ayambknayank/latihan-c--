#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

signed main() {
    bismillah
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int accel_count = 0;
    while (true) {
        string cmd;
        cin >> cmd;
        if (cmd == "SELESAI") break;

        if (cmd == "AKSELERASI") {
            int t;
            cin >> t;
            accel_count++;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 1) {
                        // Move K microbe
                        int new_j = (j + t) % m;
                        grid[i][new_j] = 1;
                        grid[i][j] = 0;
                    } else if (grid[i][j] == 2) {
                        // Move B microbe
                        int new_i = (i + t) % n;
                        grid[new_i][j] = 2;
                        grid[i][j] = 0;
                    }
                }
            }
            cout << "AKSELERASI " << t << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << grid[i][j] << " ";
                }
                cout << endl;
            }
        } else if (cmd == "EKSPERIMEN") {
            int x, y;
            cin >> x >> y;
            if (grid[x][y] == 1) {
                // K microbe
                grid[x][y] = 0;
                cout << "1" << endl;
            } else if (grid[x][y] == 2) {
                // B microbe
                grid[x][y] = 0;
                cout << "2" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}