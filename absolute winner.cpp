#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	int absolute = (a+b+c)*4/7;
	if (a==absolute || b==absolute || c==absolute){
		cout << "YA";
	}else{
		cout << "TIDAK";
	}
	
	return 0;
}