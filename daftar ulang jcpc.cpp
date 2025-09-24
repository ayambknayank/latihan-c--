#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	string s[101];
	for(int i=1; i<=n; i++){
		cin >> s[i];
	}
	for(int i=0; i<q; i++){
		string x; cin >> x;
		int y=-1;
		for(int j=1; j<=n; j++){
			if(x==s[j]){
				y=j;
				break;
			}
		}
		cout << y << endl;
	}
}