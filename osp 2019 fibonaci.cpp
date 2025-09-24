#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long fibonaci(int n){
	if(n==1 || n==0){
		return n;
	}
	return (fibonaci(n-2)+fibonaci(n-1));
}

int main(){
	int q;
	cin >> q;
	
	long long n;
	for(int i=0; i<q; i++){
		cin >> n;
		cout << fibonaci (n) << endl;
	}
	
	
	return 0;
}