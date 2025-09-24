#include <iostream>
using namespace std;

int main (){
	int n, m, x;
	cin >> n >> m >> x;
	bool benar = false;
	int a[100];
	int ke = 1;
	
	for(int i=1; i<=x*n; i++){
		for (int k=1; k<=x*n; k++){
			k=k%n;
			if (k%n==0){
				k=n;
			}
			a[i] = k;
			
			if (i%m==0){
				benar = true;
			}
			
			if (!benar){
			cout << k << " ";
			}
		}	
	}
		
	
	
	
	return 0;
}