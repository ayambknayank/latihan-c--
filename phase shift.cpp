#include <bits/stdc++.h>
using namespace std;

#define int long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);


void solve(){
	int n; cin >> n;
	string s;
	cin >> s;
	vector<char> huruf(26, '');
	char awal = 'a';
	for(int i=0; i<s.length(); i++){
		if(huruf[s[i]]!=''){
			s[i]=huruf[i];
		}else{
			if(s[i]==awal){
				awal++;
				huruf[s[i]]=awal;
				baru+=awal;
			}
		}
	}
}

int main(){
	bismillah
	int t; cin >> t;
	while(t--){
		solve();
	}
}