#include<bits/stdc++.h>
using namespace std;

int n, h, a, lebar=0;

int main(){
	cin >> n >> h;
	while(n--){
		cin >> a;
		if(a<=h){
			lebar++;
		}else{
			lebar+=2;
		}
	}
	cout << lebar;
}