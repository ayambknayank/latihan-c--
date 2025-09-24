#include <iostream>
using namespace std;

const int N = 105;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt = 0;
        char s[N];
        cin >> n >> (s + 1);

        for (int i = 1; i <= n; i++)
            cnt += (s[i] != '?');

        if (!cnt)
            s[1] = 'R';

        for (int i = 2; i <= n; i++)
            if (s[i] == '?' && s[i - 1] != '?')
                s[i] = s[i - 1] ^ ('B' ^ 'R');

        for (int i = n - 1; i >= 1; i--)
            if (s[i] == '?' && s[i + 1] != '?')
                s[i] = s[i + 1] ^ ('B' ^ 'R');

        cout << (s + 1) << endl;
    }

    return 0;
}
