#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int n, x, y, p;
	cin >> n >> x >> y >> p;
	int menang = max(y, x)+n;
	int kalah = min(x,y)-n;
	if(kalah<0){
		kalah = 0;
	}
	if(menang == p || kalah == p){
		cout << "YA";
	}else{
		cout << "TIDAK";
	}
}