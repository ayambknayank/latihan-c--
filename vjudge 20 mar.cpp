#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int x, y, hasil=0;
		cin >> x;
		for(int i=0; i<3; i++){
			cin >> y;
			if(y>x){
				hasil++;
			}
		}
		cout << hasil << endl;
	}
}