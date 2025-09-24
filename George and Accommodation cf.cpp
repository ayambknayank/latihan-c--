#include<bits/stdc++.h>
using namespace std;

int n, a, b, hasil=0;

int main(){
	cin >> n;
	while(n--){
		cin >> a >> b;
		if(b-a>=2){
			hasil++;
		}
	}
	cout << hasil;
}