#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> ps;
        ps.push_back(0);
        vector<int>psmax;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            ps.push_back(ps.back()+x); // jumlhin prefixsum
            if(i==0){
            	psmax.push_back(x);
			}else{
				psmax.push_back(max(psmax.back(), x));
			}
        }

        for (int i = 0; i < q; i++) {
            int y;cin >> y;
            int idx = upper_bound(psmax.begin(), psmax.end(), y)-psmax.begin();
            cout << ps[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}
