#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

const int modu = 1e9+7;

int pangkat(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b & 1) {
            result = (result * a) % (modu-1);
        }
        a = (a * a) % (modu-1);
        b >>= 1;
    }
    return result;
}

int pangkatt(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b & 1) {
            result = (result * a) % modu;
        }
        a = (a * a) % modu;
        b >>= 1;
    }
    return result;
}


void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int atas = pangkat(b, c);
	//cout << atas << endl;
	int ans = pangkatt(a, atas);
	cout << ans << endl;
}

signed main(){
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}