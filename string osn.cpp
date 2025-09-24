#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL), cout.tie(NULL);
#define int long long

signed main(){
	string s;
	cin >> s;
	string test[] = {"OSN", "ONS", "NOS", "NSO", "SON", "SNO"};
	int maks = 0;
	for(int i=0; i<6; i++){
		string coba = test[i];
		int ans=0;
		for(int j=0; j<s.length(); j++){
			if(s[j]==coba[ans%3]){
				ans++;
			}
		}
		maks = max(maks, ans);
	}
	if(maks<3){
		cout << -1;
	}else{
		cout << maks;
	}
}