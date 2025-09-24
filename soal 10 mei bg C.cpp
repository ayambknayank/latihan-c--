#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int pos_a = 0, pos_b = 0;
    while (pos_a < n && pos_b < n) {
        while (pos_a < n && a[pos_a] == 0) {
            pos_a++;
        }
        while (pos_b < n && b[pos_b] == 0) {
            pos_b++;
        }
        if (pos_a == n && pos_b == n) {
            cout << "YES\n";
            return 0;
        }
        if (a[pos_a] == b[pos_b]) {
            cout << "NO\n";
            return 0;
        }
        pos_a++;
        pos_b++;
    }
    cout << "YES\n";
    return 0;
}
