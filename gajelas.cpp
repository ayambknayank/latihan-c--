#include <iostream>
#include <vector>
#include <string>

using namespace std;

string findStringFromTrace(vector<int>& trace) {
    int n = trace.size();
    string result(n, ' '); // Initialize string of length n with spaces
    int count[26] = {0}; // Array to count occurrences of each character

    for (int i = 0; i < n; ++i) {
        int idx = -1;
        // Find the index of the character that has occurred 'trace[i]' times before
        for (int j = 0; j < 26; ++j) {
            if (count[j] == trace[i]) {
                idx = j;
                break;
            }
        }
        // Set the character at position i in the string
        result[i] = 'a' + idx;
        // Increment count for this character
        count[idx]++;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

        string result = findStringFromTrace(trace);
        cout << result << endl;
    }

    return 0;
}