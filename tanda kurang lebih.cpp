#include<bits/stdc++.h>
using namespace std;

int n, x;

int main(){
	cin >> n;
	while(n--){
		int n;cin >> n;
		string s;
		cin >> s;
		int hit = 1, ans = 1;
		for(int i=0; i<n-1; i++){
			if(s[i]==s[i+1]){
				hit++;
			}else{
				hit=1;
			}
			ans = max(ans, hit);
		}
		cout << ans+1 << endl;
	}
}