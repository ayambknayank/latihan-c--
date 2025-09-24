#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int t; cin >> t;
	int a, x, org=0;
	while(t--){
		org=0;
		cin >> a;
		for(int i=0; i<3; i++){
			cin >> x;
			if(x>a){
				org++;
			}
		}
		cout << org << endl;
	}
}