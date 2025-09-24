#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long n,k;
	long long a[100005], b[100005];
	cin >> n >> k ;
	
	
	for (int i=0; i<n; i++){
		cin >> a[i];
		if (i>=1){
			a[i]+=a[i-1];
		}
	}
	
	for (int i=0; i<k; i++){
		cin >> b[i];
		long long m = 0, hitung = 0;
		
		while (b[i]>=a[m] && m<n){
			hitung++;
			m++;
		}
		cout << hitung << endl;
	}
	return 0;
}