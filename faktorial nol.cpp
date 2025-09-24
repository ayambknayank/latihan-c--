#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int nol = 0;
	while(n>4){
		nol += n/5;
		n=n/5;
	}
	cout << nol;
	
	return 0;
}