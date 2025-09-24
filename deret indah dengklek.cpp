#include <iostream>
using namespace std;
int main (){
	
	int a, b, c, n;
	cin >> a >> b >> c;
	
	for (int i = 1; i<=b; i++){
		
		cout << a << endl;
		a+=c;
	}
}