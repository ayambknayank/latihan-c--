#include <iostream>
#include <vector>

using namespace std;

int maxCandies(vector<int>& candies) {
    int n = candies.size();
    int left = 0, right = n - 1;
    int aliceWeight = 0, bobWeight = 0;
    int maxCandies = 0;

    while (left <= right) {
        if (aliceWeight == bobWeight) {
            maxCandies = max(maxCandies, left + right + 2);
            aliceWeight += candies[left++];
        } else if (aliceWeight < bobWeight) {
            aliceWeight += candies[left++];
        } else {
            bobWeight += candies[right--];
        }
    }

    return maxCandies;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> candies(n);

        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }

        int result = maxCandies(candies);
        cout << result << endl;
    }

    return 0;
}
