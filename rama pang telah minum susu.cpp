#include<bits/stdc++.h>
using namespace std;

int n, x, y, hasil;

int main(){
	cin >> n >> x >> y;
	if(x<y){
		cout << n;
		return 0;
	}else{
		hasil = n%y;
		cout << x*(n/y)+hasil;
	}
	return 0;
}