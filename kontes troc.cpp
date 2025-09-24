#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	// aturan segitiga
	int ans=0;
	if(a+b<=c){
		ans += c-(a+b)+1;
	}else if(a+c<=b){
		ans += b-(a+c)+1;
	}else if(b+c<=a){
		ans += a-(b+c)+1;
	}
	cout << ans;
}