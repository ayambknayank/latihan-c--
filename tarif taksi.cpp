#include<iostream>

using namespace std;

int main(){
	int t, a, b, l;
	cin >> t;
	
	int hasil;
	for(int i=0; i<t; i++){
		cin >> a >> b >> l;
		if(l<2000){
			cout << a << endl;
		}else{
			hasil = a+(b*(l/100-20)); 
			cout << hasil << endl;
		}
		
	}
	 
	
}