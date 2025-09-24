#include <iostream>
#include <vector>

#define MOD 998244353
#define int long long
using namespace std;

signed main() {
    int N;
    cin >> N;
	
	if(N==1 || N==2){
		cout << 2 << endl;
		return 0;
	}else if(N==3){
		cout << 3 << endl;
		return 0;
	}
	
    vector<long long> dp(N + 1, 0);

    dp[1] = 2; 
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= N; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[N] << endl;

    return 0;
}
