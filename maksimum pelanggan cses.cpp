#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> waktu(n);
    for (int i = 0; i < n; i++) {
        cin >> waktu[i].first >> waktu[i].second;
    }

    vector<pair<int, int>> event;
    for (int i = 0; i < n; i++) {
        event.push_back({waktu[i].first, 1});
        event.push_back({waktu[i].second, -1});
    }

    sort(event.begin(), event.end());

    int max_customer = 0;
    int current_customer = 0;
    for (int i = 0; i < event.size(); i++) {
        current_customer += event[i].second;
        max_customer = max(max_customer, current_customer);
    }

    cout << max_customer << endl;
    return 0;
}