#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int n, x;
	cin >> n;
	bool cek = false;
	while(n--){
		cin >> x;
		if(x%2==0){
			cek = true;
		}
	}
	if(cek) cout << "YA";
	else cout << "TIDAK";
	return 0;
}