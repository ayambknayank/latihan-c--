#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t;cin >> t;
	while(t--){
		int awal, akhir, x;
		string s;
		cin >> x >> s;
		for(int i=0; i<x; i++){
			if(s[i]=='B'){
				awal = i;
				break;
			}
		}
		for(int i=x-1; i>=0; i--){
			if(s[i]=='B'){
				akhir = i;
				break;
			}
		}
		cout << akhir-awal+1 << endl;
	}
}