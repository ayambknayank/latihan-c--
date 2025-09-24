#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> data(n);
	for(int i=0; i<n; i++){
		cin >> data[i];
	}
	sort(data.begin(), data.end());
	int terbesar = 0;
	for(int i=n-1; i>0; i--){
		terbesar = max(terbesar, data[i]-data[i-1]);
	}
	int gema = terbesar;
	int astik = data[data.size()-1]-data[0];
	cout << gema << endl << astik;
}