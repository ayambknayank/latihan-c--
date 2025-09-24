#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	string s;
	getline(cin, s);
	int ans=0;
	string halo = "halo dunia";
	int i=0;
	for(char& a:s){
		a = tolower(a);
		if(a==halo[i]){
			ans++;
		}
		i++;
	}
//	for(char a:s){
//		if(a==halo[i]){
//			ans++;
//		}
//		i++;
//		if(i==halo.size()){
//			i=0;
//		}
//	}
	cout << ans;
}