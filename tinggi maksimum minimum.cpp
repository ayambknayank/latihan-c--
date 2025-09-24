#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int terkecil = INT_MAX, terbesar = INT_MIN;
        int bilB = 0;
        int bilK = 0;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            terkecil = min(a, b);
            terkecil = min(terkecil, c);
            terbesar = max(a, b);
            terbesar = max(terbesar, c);
            
            bilB += terbesar;
            bilK += terkecil;
        }
        
        cout << bilK << " " << bilB << endl;
    }

    return 0;
}
