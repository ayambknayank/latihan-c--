#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		string s;
		cin >> s;
		int tukar=0;
		while(true){
			bool cek = true;
			for(int i=0; i<n-2; i++){
				if(s[i]=='m'&&s[i+1]=='a' && s[i+2]=='p'){
					s[i+2]='a';
					tukar++;
					cek=false;
				}else if(s[i]=='p'&&s[i+1]=='i' && s[i+2]=='e'){
					s[i+2]='a';
					tukar++;
					cek=false;
				}
			}
			if(cek){
				break;
			}
		}
		cout << tukar << endl;
	}
}