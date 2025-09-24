#include <iostream>
using namespace std;

int main (){
	
	string a,b;
	char c = '\n';
	while (cin >> a){
		b = b + a + c;
	}
	cout << b;
}