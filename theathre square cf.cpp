#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    ll n, m, a;
    cin >> n >> m >> a;
    ll p, l;
    if(n%a==0){
    	l = n/a;
	}else{
		l = n/a+1;
	}
	if(m%a==0){
    	p = m/a;
	}else{
		p = m/a+1;
	}
	cout << l*p;
	return 0;
}