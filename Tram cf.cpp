#include<bits/stdc++.h>
using namespace std;

int n, a, b, terbesar=0, dalam=0;

int main(){
	cin >> n;
	while(n--){
		cin >> a >> b;
		dalam = dalam-a+b;
		terbesar = max(terbesar, dalam);
	}
	cout << terbesar;
}