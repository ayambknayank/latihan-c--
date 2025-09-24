#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int b=0, a=0;
		for(auto& c : s){
			if(c == 'A')a++;
			else if(c == 'B') b++;
		}
		if(b>a) cout << "B";
		else cout << "A";
		cout << endl;
	}
}