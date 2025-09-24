#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main() {
    bismillah
    int n; 
    cin >> n;
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            int k = n - i - j;
            if(k >= 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
