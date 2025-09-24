#include <iostream>
#include <string>
using namespace std;

bool ketemu(char a, string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (a == s[i]) {
            s.erase(i, 1);
            return true;
        }
    }
    return false;
}

int main() {
    string s, t, baru, contoh;
    cin >> s >> t;
    baru = s + t;
    cin >> contoh;
    bool cek = true;
    
    if (contoh.length() != baru.length()) {
        cout << "NO";
        return 0;
    }
    
    for (int i = 0; i < baru.length(); i++) {
        if (!ketemu(baru[i], contoh)) {
            cek = false;
            break;
        }
    }
    if (cek) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
