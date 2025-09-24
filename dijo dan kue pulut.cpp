#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, max;
	long long hasil=0;
	
	cin >> n;
	while(n--){
		cin >> k;
		hasil+=k;
		if(k>max) max=k;
	}
	if(max>hasil/2){
		cout << 2*max-1;
	}
	else{
		cout << hasil;
	}
}