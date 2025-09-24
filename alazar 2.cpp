#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> urutan(n);
	for(int i=0; i<n; i++){
		urutan[i]=i+1;
		int x; cin >> x;
		if(x!=i+1){
			swap(urutan[i+1], urutan[x]);
		}
	}
	for(int i=0; i<n; i++){	
		cout << urutan[i] << " ";
	}
}