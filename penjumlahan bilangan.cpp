#include<iostream>
using namespace std;

long long t, a, b, hasil;
int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		hasil = 0;
		cin >> a >> b;
		
		if(max(a,b) > 0 && max(a,b) > -min(a, b)) {
		cout << "Kasus #" << i+1 << ": " << "Positif" << endl;
		}else if(a==-b){
			cout << "Kasus #" << i+1 << ": " << "Nol" << endl;
		}else{
			cout << "Kasus #" << i+1 << ": " << "Negatif" << endl;
		}
	}	 
}