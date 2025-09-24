#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> urutan(n+1);
	for(int i=1; i<=n; i++){
		urutan[i]=i;
	}
	vector<int> hasil(n+1);
	for(int i=1; i<=n; i++){
		int x; cin >> x;
		if(x!=i){
			swap(urutan[i], urutan[x]);
		}
	}
	for(int i=1; i<=n; i++){	
		hasil[urutan[i]]=i;
	}
	for(int i=1; i<=n; i++){	
		cout << hasil[i] << " ";
	}
}