#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int huruf[130];

int main(){
	int t;cin >> t;
	while(t--){
		string s;
		cin >> s;
		int pjg = s.length()-1;
		for(int i=0; i<pjg; i+=2){
			cout << s[i];
		}
		cout << s[pjg];
		cout << endl;
	}
}