#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n/1000>=1){
		cout << "1000 " << n/1000 << endl;;
		n%=1000;
	}
	if(n/500>=1){
		cout << "500 " << n/500 << endl;;
		n%=500;
	}
	if(n/200>=1){
		cout << "200 " << n/200 << endl;;
		n%=200;
	}
	if(n/100>=1){
		cout << "100 " << n/100 << endl;;
		n%=100;
	}
	if(n/50>=1){
		cout << "50 " << n/50 << endl;;
		n%=50;
	}
	if(n/20>=1){
		cout << "20 " << n/20 << endl;;
		n%=20;
	}
	if(n/10>=1){
		cout << "10 " << n/10 << endl;;
		n%=10;
	}
	if(n/5>=1){
		cout << "5 " << n/5 << endl;;
		n%=5;
	}
	if(n/2>=1){
		cout << "2 " << n/2 << endl;;
		n%=2;
	}
	if(n/1>=1){
		cout << "1 " << n/1 << endl;;
		n%=1;
	}
	
	return 0;
}