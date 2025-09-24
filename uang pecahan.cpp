#include<bits/stdc++.h>
using namespace std;

int bagi(int x, int y){
	return x/y;
}

int main(){
	int x;
	cin >> x;
	
	if(x/1000>0){
		cout << "1000 " << x/1000 << endl;
		x%=1000;
	}if(x/500>0){
		cout << "500 " << x/500 << endl;
		x%=500;
	}if(x/200>0){
		cout << "200 " << x/200 << endl;
		x%=200;
	}if(x/100>0){
		cout << "100 " << x/100 << endl;
		x%=100;
	}if(x/50>0){
		cout << "50 " << x/50 << endl;
		x%=50;
	}if(x/20>0){
		cout << "20 " << x/20 << endl;
		x%=20;
	}if(x/10>0){
		cout << "10 " << x/10 << endl;
		x%=10;
	}if(x/5>0){
		cout << "5 " << x/5 << endl;
		x%=5;
	}if(x/2>0){
		cout << "2 " << x/2 << endl;
		x%=2;
	}if(x/1>0){
		cout << "1 " << x/1 << endl;
		x%=1;
	}
}