#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	double total=0;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		total+=x;
	}
	total = total/m*1.00;
	cout << fixed << setprecision(2) << total;
}