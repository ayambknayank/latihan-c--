#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pi(n);

    for (int i = 0; i < n; ++i) {
        cin >> pi[i];
    }

    double total = 0;

    for (int i = 0; i < n; ++i) {
        total += pi[i];
    }

    double result = total / n;

    cout << fixed << setprecision(9) << result << endl;

    return 0;
}
