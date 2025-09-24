#include <iostream>
using namespace std;

int main (){

	cout << "program deret fibonacci \n";
	cout << "masukkan nilai ke-n : ";
	
	long long n,f_n,f_n1,f_n2;
	
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 0;
	  
	for (int i=1; i<=n ; i++){
		
		f_n = f_n1 + f_n2;
		f_n1 = f_n2;
		f_n2 = f_n;
		
		
		
		cout << f_n << " ";
	}
}