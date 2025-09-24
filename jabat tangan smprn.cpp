#include <iostream>
using namespace std;

long long jb[55], n;

int main(){
	cin >> n;
	jb[0] = 1;
	
	for (int i=2; i<=n; i++){
		jb[i] = 0;
	}
	for (int i=2; i<=n; i+=2){
		for (int j=0; j<i; j+=2){
			jb[i] += jb[j] * jb[i-j-2];
		}
	}
	cout << jb[n];
}