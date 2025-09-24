#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	float a, b, c;
	cout << fixed;
	
	cin >> a;
	cin >> b;
	
	c = (a*b)/2;
	
	if ((a>=1 and a<=1000) and (b>=1 and b<=1000)){
		cout << setprecision(2) << c << endl;
	}	
	//else if ((a<1 and a>1000) and (b<1 and a>1000)){
	else {
		cout << "nilai yg anda masukkan tidak sesuai" << endl;
	}
	
}