#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	string s;
	cin >> s;
	int bisa=1;
	int terbesar = 0;
	if(s.length()==1){
		cout << 1;
		return 0;
	}
	string baru;
	for(int i=0; i<=s.length()-2; i++){
		if(s[i]!=s[i+1]){
			bisa++;
			baru+=s[i];
		}else{
			terbesar = max(bisa, terbesar);
			bisa=1;
		}
	}
	terbesar = max(bisa, terbesar);
	cout << terbesar;
}