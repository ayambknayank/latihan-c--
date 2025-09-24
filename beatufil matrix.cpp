#include<bits/stdc++.h>
using namespace std;

int a, hasil;

int main(){
	for(int y=1; y<=5; y++){
		for(int x=1; x<=5; x++){
			cin >> a;
			if(a==1){
				hasil = abs(x-3) + abs(y-3);
			}
		}
	}
	cout << hasil << endl;
}