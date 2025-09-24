#include<bits/stdc++.h>
using namespace std;

int n, hasil=1;
string awal, mag;

int main(){
	cin >> n;
	cin >> awal;
	n--;
	while(n--){
		cin >> mag;
		if(mag!=awal){
			hasil++;
		}
		awal=mag;
	}
	cout << hasil;
}