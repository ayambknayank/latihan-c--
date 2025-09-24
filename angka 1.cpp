#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int n;
	cin >> n;
	ll tot=0;
	for(int i=1; i<=n; i++){
		tot+=i;
		cout << tot << endl;
	}
	return 0;
}