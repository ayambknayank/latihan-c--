#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    
    pair<int, int> data[100];
    int denominations[3] = {5, 2, 1};
    int y = 0;

    while (n > 0) {
        for (int i = 0; i < 3; i++) {
            int count = n / denominations[i];
            if (count > 0) {
                data[y].first = denominations[i];
                data[y].second = count;
                y++;
                n -= count * denominations[i];
            }
            if (n == 0) {
                break;
            }
        }
    }

    cout << y << endl;
    for (int i = 0; i < y; i++) {
        cout << data[i].first << " " << data[i].second << endl;
    }

    return 0;
}
