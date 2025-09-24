#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cost(n);
    for (int i = 0; i < n; ++i) {
        cin >> cost[i];
    }

    vector<vector<int>> friends(n);
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        friends[x - 1].push_back(y - 1);
        friends[y - 1].push_back(x - 1);
    }

    long long total_cost = 0;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            // BFS to spread rumor from character i
            queue<int> q;
            q.push(i);
            visited[i] = true;
            long long min_cost = cost[i]; // Minimum cost to spread rumor from character i

            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                for (int j : friends[curr]) {
                    if (!visited[j]) {
                        q.push(j);
                        visited[j] = true;
                        min_cost = min(min_cost, (long long)cost[j]); // Update minimum cost
                    }
                }
            }

            total_cost += min_cost; // Accumulate total cost
        }
    }

    cout << total_cost << endl;

    return 0;
}
