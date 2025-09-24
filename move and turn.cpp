#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    int n;
    cin >> n;
    int k = n / 2;
    if (n % 2 == 0) {
        cout << (k + 1) * (k + 1) << endl;
    } else {
        cout << 2 * (k + 1) * (k + 2) << endl;
    }
    return 0;
}