#include<bits/stdc++.h>
using namespace std;

int main(){
	int hasil=0;
	
	int i=2612;
	int dua=0, tiga=0, sembilan=0, enam=0;
	while(i>161){
		if(i%2==0){
			dua++;
		}
		if(i%3==0){
			tiga++;		
		}
		if(i%9==0){
			sembilan++;
		}
		if(i%6==0){
			enam++;
		}
		hasil=dua+tiga-enam;
		i--;
	}
	cout << dua << endl;
	cout << tiga << endl;
	cout << sembilan << endl;
	cout << enam << endl;
	cout << hasil;
}