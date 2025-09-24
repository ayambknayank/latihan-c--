#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int f[n];
	for (int i=0; i<n; i++){
		cin >> f[i];
	}
	for (int i=n-1; i>=0; i--){
		if (i!=0){
			cout << f[i] << ",";
		}else{
			cout << f[i] ;
		}
		
	}
	
	return 0;
}