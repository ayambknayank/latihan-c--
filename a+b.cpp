#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if(b>=1009){
		cout << a%1009;
	}else{
	int jumlah=1;
	for(int i=2; i<=b; i++){
		jumlah*=i;
		jumlah%=1009;
		}
	cout << (a+jumlah)%1009;
	}
}