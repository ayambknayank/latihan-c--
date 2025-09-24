#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int min_gondolas(int n, int x, vector<int>& weights) {
    sort(weights.begin(), weights.end());
    int left = 0, right = n - 1;
    int gondolas = 0;

    while (left <= right) {
        if (weights[left] + weights[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        gondolas++;
    }

    return gondolas;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    cout << min_gondolas(n, x, weights) << endl;

    return 0;
}
