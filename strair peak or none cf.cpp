#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a<b && b<c){
			cout << "STAIR" << endl;
		}else if(a<b && b>c){
			cout << "PEAK" << endl;
		}else{
			cout << "NONE" << endl;
		}
	}
	return 0;
}