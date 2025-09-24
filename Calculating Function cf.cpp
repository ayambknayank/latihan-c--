#include<bits/stdc++.h>
using namespace std;

long long x;

int main(){
	cin >> x;
	if(x%2==0){
		x/=2;
	}else{
		x = (x/2)-x;
	}
	cout << x;
}