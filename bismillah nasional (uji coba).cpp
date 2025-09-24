#include<bits/stdc++.h>
using namespace std;

//COBA COBA AJAA BUAT SIMULASI

int main(){
	int t;
	cin >> t;
	string s;
	cin >> s;
	int ans=0;
	int o=0, n=0;
	for(int i=0; i<t; i++){
		for(int j=t-1; j>=0; j--){
			if(s[i]=='O'){
				o++;
			}else if(s[j]=='N'){
				n++;
			}
			if(o==1 && n==1){
				for(int k=i+1; k<j; k++){
					if(s[k]=='S'){
						ans++;
					}
				}
				o=0, n=0;
			}
		}
	}
	cout << ans << endl;
}