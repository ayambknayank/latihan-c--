#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

ll pramugari1(ll n, char c){
	ll perbaris = n - 1;
    ll layan = n / 2;
    ll ans = (layan * 6) + perbaris;

    if (c == 'c') {
        ans += 5;
    } else if (c == 'b') {
        ans += 4;
    } else if (c == 'a') {
        ans += 3;
    } else if (c == 'd') {
        ans += 2;
    } else if (c == 'e') {
        ans += 1;
    }

    return ans+1;
}

signed main() {
    ll n;
    char c;
    cin >> n >> c;
	
	ll hasil;
    if(n%4==1 || n%4==2){
    	hasil = pramugari1(n, c);
	}else if(n%4==3 || n%4==0){
		hasil = pramugari1(n-2, c);
	}
	cout << hasil << endl;

    return 0;
}
