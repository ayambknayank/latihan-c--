#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    char under = '_';
    getline(cin, s);

    size_t pos = s.find(under);
    if (pos != string::npos){
    while (pos != string::npos) {
        if (pos + 1 < s.length()) {
            s[pos + 1] = toupper(s[pos + 1]);
        }
        s.erase(pos, 1);
        pos = s.find(under);
        }
    } else {
        for (size_t i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
                s.insert(i + 0, 1, under);
                i++; 
            }
        }
    }

    cout << s;

    return 0;
}
