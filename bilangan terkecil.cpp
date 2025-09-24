#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k == 0) {
        cout << s << endl;
        return 0;
    }

    if (n == 1) {
        cout << "0" << endl;
        return 0;
    }

    // Change the digits to minimal possible value
    if (s[0] != '1' && k > 0) {
        s[0] = '1';
        --k;
    }
    for (int i = 1; i < n && k > 0; ++i) {
        if (s[i] != '0') {
            s[i] = '0';
            --k;
        }
    }

    cout << s << endl;
    return 0;
}
