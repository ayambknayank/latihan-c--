#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int k, n;
	cin >> n >> k;
	int bil[n+1];
		for(int i=0; i<n; i++){
		cin >> bil[i];
		}
		sort(bil, bil+n);
	
		int a = bil[k-1] - bil[0];
		for(int i=k-1; i<n; i++){
			a=min(a, bil[i]-bil[i+1-k]);
		}
		cout << a;
}