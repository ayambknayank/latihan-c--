#include<iostream>

using namespace std;

long long t, a, b;
long long ujiA[5], ujiB[5];

int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		long long hasil = 0;
		cin >> a >> b;
		for(int j=1; j<=4; j++){
			ujiA[j]=a/5;
			if(a%5>=j) ujiA[j]++;
		}
		for(int j=1; j<=4; j++){
			ujiB[j]=b/5;
			if(b%5>=j) ujiB[j]++;
		}
		
		hasil += ujiA[1]*ujiB[4];
		hasil += ujiB[1]*ujiA[4];
		hasil += ujiA[2]*ujiB[3];
		hasil += ujiB[2]*ujiA[3];
		
		cout << "Kasus #" << i+1 << ": " << hasil << endl;
	}
}