#include <iostream>
using namespace std;

int emas(int n){
	int n2 = n/2;
	int n3 = n/3;
	int n4 = n/4;
	if (n<12){
		return n;
	}else {
		return emas(n2)+emas(n3)+emas(n4) ;
	}
}

int main(){
	int n;
	cin >> n;
	cout << emas(n);
	return 0;
}