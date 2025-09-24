#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=1, b=2, c=3, d=4, e=5;
	int hasil=0;
	
	while(hasil<=8208){
		hasil+=a;
	if(hasil>=8208){
		cout << "a";
		break;
	}
	hasil+=b;
	if(hasil>=8208){
		cout << "b";
		break;
	}
	hasil+=c;
	if(hasil>=8208){
		cout << "c";
		break;
	}
	hasil+=d;
	if(hasil>=8208){
		cout << "d";
		break;
	}
	hasil+=e;
	if(hasil>=8208){
		cout << "e";
		break;
	}
	}
	cout << hasil;
	
}