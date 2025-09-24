#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

bool genap(int x){
	if(x%2==0){
		return true;
	}
	return false;
}

int main(){
	int t;cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		if(genap(x) && genap(y)){
			cout << "YES" << endl;
			continue;
		}
		if(genap(x) && x/2!=y){	
			cout << "YES" << endl;
			continue;
		}else if(genap(y) && y/2!=x){	
			cout << "YES" << endl;
			continue;
		}else{
			cout << "NO" << endl;
		}
	}
}