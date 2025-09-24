#include <iostream>
using namespace std;

int main(){
	int p, q;
	cin >> p >> q;
	
	int hasil = (p*p)+(q*q)+1;
	
	if (hasil%4==0){
		cout << hasil/4;
	}else{
		cout << "-1";
	}
	
	return 0;
}