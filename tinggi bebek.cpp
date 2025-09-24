#include <iostream>
using namespace std;

int main (){
	
	int a, b, c;
	cin >> a >> b >> c;
	
	for (a>=1; a<=100;){
		for (b>=1; b<=100;){
			for (c>=1; c<=100;){
				if (a>b>c){
				cout << c << a << b;
				break;
				}
				else if (b>c>a){
				cout << a << b << c;
				break;
				}
				else if (c>a>b){
				cout << b << c << a;
				break;
				}
				else if (b>a>c){
				cout << c << b << a;
				break;
				}
				else if (a>c>b){
				cout << b << a << c;
				break;
				}
				else if (c>b>a){
				cout << a << c << b; 
				break;
				}
				else {
				cout << "tidak ada";
				break;
				}
				break;
				}
			}
		}	
	cin.get();
	return 0;
	}