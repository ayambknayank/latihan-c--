#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t;string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(s.length()!=3){
			cout << "NO" << endl;
			continue;
		}
		if(s[0]=='y' || s[0]=='Y'){
			if(s[1]=='e' || s[1]=='E'){
				if(s[2]=='s' || s[2]=='S'){
					cout << "YES" << endl;
				}else{
					cout << "NO" << endl;
					continue;
				}
			}else{
				cout << "NO" << endl;
				continue;
				}
		}else{
			cout << "NO" << endl;
			continue;
		}
	}
}