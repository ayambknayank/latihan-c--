#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a+b>=10 || a+c>=10 || b+c>=10){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}