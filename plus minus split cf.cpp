#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t;cin>> t;
	while(t--){
		int bil=0, x;
		string s;
		cin >> x >> s;
		for(auto a:s){
			if(a=='+'){
				bil++;
			}else{
				bil--;
			}
		}
		cout << abs(bil) << endl;
	}
}