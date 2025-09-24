#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){
	int n;
	cin >> n;
	
	int i=1;
	while(i>0){
		int angka[2]={50};
		cin >> a >> b >> c;
		angka[0] = a;
		angka[1] = b;
		angka[2] = c;
		sort(angka, angka+3);
		cout << angka[1] << endl;
		if(i==n){
			break;
		}
	}
	return 0;
}