#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1;  i<= n-1; i++){
        for(int j = 1; j*i < n; j++){
            if(i == j){
            	continue;
			}
            int k = n-i*j;
            if(k==i || k==j){
            	continue;
			}
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}