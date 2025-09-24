#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for (int i=1; i<=n; i++){
	int a = 3;
		for (int k=n; k>i; k--){
			cout << " ";
		}
		for (int j=1; j<=(2*i-1); j++){
		
			if (i==n/2+1 || j==1 || j==(2*i-1) || i==n){	
				cout << "*";
					
			}else {	
				
				if(j==a || j==(2*i)-a){
					cout << "*";
					
				}else{
					cout << " ";
				}
				
				
			}
		}a+=2;
		cout << endl;
		
	}
	
	return 0;
}