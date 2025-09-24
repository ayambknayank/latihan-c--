#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> penyihir(n);
	for(int i=0; i<n; i++){
		cin >> penyihir[i];
	}
	
	sort(penyihir.begin(), penyihir.end(), greater<int>());
	
	int hasil=0, e=n;
	for(int i=0; i<e; i++){
		n-=penyihir[i]+1;
		hasil++;
		if(n<=0)break;
	}
	cout << hasil;
}