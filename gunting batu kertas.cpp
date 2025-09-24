#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string satu, dua;
	cin >> satu >> dua;
	int ans=0;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(satu[i]=='G' && dua[j]=='K'){
				++ans;
				dua[j]='X';
				break;
			}else if(satu[i]=='K' && dua[j]=='B'){
				++ans;
				dua[j]='X';
				break;
			}else if(satu[i]=='B' && dua[j]=='G'){
				++ans;
				dua[j]='X';
				break;
			}
		}
	}
	cout << ans;
}