#include <iostream>
using namespace std;

long long pangkat(long long a, long long b, long long c){
	if (b == 0){
		return 1;
	}
	if (b == 1){
		return a%c;
	}
	
	long long res = pangkat (a, b/2, c)%c;
	res = (res*res)%c;
	
	if (b%2 == 1){
		res = (res *a)%c;
	}
	
	return res;
}

signed main (){
	long long a, b, c, n;
	cin >> a >> b >> c >> n;
	
	while(c--){
		a = pangkat (a, b, n);
	}
	
	cout << a+1 << endl;
	
	return 0;
}