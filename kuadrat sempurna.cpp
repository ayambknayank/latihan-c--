#include <iostream>
#include <cmath>
using namespace std;

bool kuadrat(long long n){
	long long kusem = sqrt(n);
	
	if (kusem * kusem == n){
		return true;
	}else {
		return false;
	}
}

int main (){
	long long n;
	cin >> n;
	
	if (kuadrat (n)){
		cout << sqrt(n);
	}else {
		cout << "0";
	}
	
	return 0;
}