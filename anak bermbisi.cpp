#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	cin >> x;
	int hasil;
	hasil=abs(x);
	for(int i=0; i<n-1; i++){
		cin >> x;
		if(abs(x)<hasil){
			hasil = abs(x);
		}
	}
	cout << hasil;
}