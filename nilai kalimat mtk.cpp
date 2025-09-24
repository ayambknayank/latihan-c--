#include <iostream>
using namespace std;

int main (){
	long long a, b;
	char operasi;
	cin >> a >> operasi >> b;
	
	switch (operasi){
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '<':
			if (a<b){
				cout << "benar" << endl;
				break;
			}else{
				cout << "salah" << endl;
				break;
			}
		case '>':
			if (a>b){
				cout << "benar" << endl;
			}else{
				cout << "salah" << endl;
			}break;
		case '=':
			if (a==b){
				cout << "benar" << endl;
			}else{
				cout << "salah" << endl;
			}break;
	}
	
	return 0;
}