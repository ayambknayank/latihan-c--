#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
const ll MOD = 1e9+7;

ll powpow(ll x, ll y){
    if(y == 0) return 1;
    ll ans = powpow(x, y / 2);
    ans = (ans * ans) % MOD;
    if(y & 1){
        ans = (ans * x) % MOD;
    }
    return ans;
}

int main(){
    bismillah
    ll n; cin >> n;
    cout << (powpow(2, n) - 1 + MOD) % MOD;
    return 0;
}
