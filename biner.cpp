#include <iostream>
#include <string>
using namespace std;

string biner(int n){
	string p = "1";
	string l = "0";
	
	if (n==1){
		return p;
	}else if (n % 2 == 1){
		return biner(n/2) + p;
	}else {
		return biner(n/2) + l;
	}
}

int main (){
	int n;
	cin >> n;
	
	cout << biner (n);
	
	return 0;
}