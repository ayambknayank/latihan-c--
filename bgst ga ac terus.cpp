#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    vector<int> apartments(m);

    for (int i = 0; i < n; ++i) {
        cin >> applicants[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int count = 0;
    int j = 0; // Index of the current apartment

    for (int i = 0; i < n; ++i) { // Loop over applicants
        while (j < m && apartments[j] < applicants[i] - k) {
            ++j; // Move to the next apartment
        }

        if (j < m && apartments[j] <= applicants[i] + k) {
            ++count; // Found a suitable apartment for the current applicant
            ++j; // Move to the next apartment
        }
    }

    cout << count << endl;

    return 0;
}
