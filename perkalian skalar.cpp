#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long v1[n], v2[n];
	for(int i=0; i<n; i++){
		cin >> v1[i];
	}
	for(int i=0; i<n; i++){
		cin >> v2[i];
	}
	
	sort(v1, v1+n);
	sort(v2, v2+n, greater<int>());
	
	long long hasil=0;
	for(int i=0; i<n; i++){
		hasil+=v1[i]*v2[i];
	}
	cout << hasil << endl;
}