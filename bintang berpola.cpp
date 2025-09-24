#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for (int i=1; i<=n; i++){
		for (int k=n; k>i; k--){
			cout << " ";
		}
		for (int j=1; j<=(2*i-1); j++){
			if (i==n/2+1 || j%2!=0 || i==n){
				if()	
				cout << "*";
					
			}else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}