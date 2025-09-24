#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> cula(n);
	for(int i=0; i<n; i++){
		cin >> cula[i];
	}
	sort(cula.begin(), cula.end());
	for(int i=0; i<q; i++){
		int x; cin >> x;
		cout << cula[x-1] << endl;
	}
	return 0;
}