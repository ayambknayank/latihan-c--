#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    bool h = false, e = false, l = false, l2 = false, o = false;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'h' && !h) {
            h = true;
        } else if (s[i] == 'e' && h && !e) {
            e = true;
        } else if (s[i] == 'l' && h && e && !l) {
            l = true;
        } else if (s[i] == 'l' && h && e && l && !l2) {
            l2 = true;
        } else if (s[i] == 'o' && h && e && l && l2 && !o) {
            o = true;
            break; // Langsung keluar dari loop setelah menemukan 'o'
        }
    }

    if (h && e && l && l2 && o) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
