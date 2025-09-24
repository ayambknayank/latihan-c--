#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    
    vector<int> atas(n), bawah(n);
    unordered_map<int, vector<int>> bawah_map;
    
    for(int i = 0; i < n; ++i) {
        cin >> atas[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> bawah[i];
        bawah_map[bawah[i]].push_back(i);
    }

    int total_length = 0;

    for(int i = 0; i < n; ++i) {
        int color = atas[i];
        auto &positions = bawah_map[color];
        if (positions.empty()) continue;
        
        int max_distance = LLONG_MIN;
        int best_match = -1;
        // Binary search to find the best match
        for(int pos : positions) {
            int distance = abs(i - pos);
            if (distance > max_distance) {
                max_distance = distance;
                best_match = pos;
            }
        }

        if (best_match != -1) {
            total_length += max_distance;
            // Remove the matched position from the list
            positions.erase(remove(positions.begin(), positions.end(), best_match), positions.end());
        }
    }
    
    cout << total_length << endl;

    return 0;
}
