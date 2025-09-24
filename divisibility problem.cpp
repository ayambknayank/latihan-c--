#include<iostream>
#define ll long long
using namespace std;

int main(){
	ll n; cin >> n;
	while(n--){
		ll x, y;
		cin >> x >> y;
		if(x%y==0){
			cout << "0" << endl;
		}else{
			cout << y-(x%y) << endl;
		}
	}
	return 0;
}