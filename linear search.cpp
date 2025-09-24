#include <iostream>
using namespace std;

int main(){
	long long n, d;
	long long k[1000000];
	
	cin >> n >> d;
	for (int i=0; i<n; i++){
		cin >> k[i];
	}
	
	bool ketemu = false;
	for (int i=0; i<n; i++){
		if (k[i] == d){
			cout << i;
			ketemu = true;
			break;
		}
	}
	if (!ketemu){
		cout << "-1";
	}
	
	return 0;
}