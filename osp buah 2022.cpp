#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, a, b;
	cin >> n >> a >> b;
	
	int ans = a;
	while (ans%b!=0){
	ans+=a;	
	}
	int aa = ans/a;
	int bb = ans/b;
	int ans1 = aa + bb;
	cout << ans1;
	
	return 0;
}