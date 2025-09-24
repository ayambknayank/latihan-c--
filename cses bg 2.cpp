#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n-1; i++) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());

    int missingNumber = 1;
    for (int i = 0; i < n; i++) {
        if (input[i] == missingNumber) {
            missingNumber++;
        }
    }

    cout << missingNumber << endl;

    return 0;
}
