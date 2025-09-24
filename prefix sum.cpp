#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<pair<int, int>> recipes(n);

    for (int i = 0; i < n; i++) {
        cin >> recipes[i].first >> recipes[i].second;
    }

    sort(recipes.begin(), recipes.end());

    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + (recipes[i].second - recipes[i].first + 1);
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        auto it1 = lower_bound(recipes.begin(), recipes.end(), make_pair(a, 0));
        auto it2 = upper_bound(recipes.begin(), recipes.end(), make_pair(b, 0));

        int countInRange = prefixSum[it2 - recipes.begin()] - prefixSum[it1 - recipes.begin()];

        cout << ((countInRange >= k) ? countInRange : 0) << endl;
    }

    return 0;
}
