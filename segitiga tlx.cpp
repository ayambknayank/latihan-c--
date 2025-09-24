#include <iostream>
using namespace std;
int main(){
	int a, n, x;
	x=0;
	cin >> a;
	cout << endl;
	for (a>=1; a<=100; a++){
	
		for (int i=0; i<=a; i++){
			for (int k = 0; k<i; k++){
				
					cout << x;
					x++;
					if (x>9){
						x=0;
					}

			
			}
		cout << endl;
		}
		break;
}
}
