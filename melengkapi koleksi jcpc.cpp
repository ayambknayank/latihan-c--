#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> tanya;
	vector<bool> buku(10000000, false);
	int terbesar=0;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		buku[x]=true;
	}
	for(int i=0; i<q; i++){
		int x; cin >> x;
		if(buku[x]==true){
			cout << "ada" << endl;
		}else{
			cout << "tidak ada" << endl;
		}
	}
	
}