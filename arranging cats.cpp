#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		string atas, bawah;
		int hitung = 0;
		cin >> atas >> bawah;
		for(int i=0; i<n; i++){
			if(atas[i]==0 && bawah[i]==1){
				hitung++;
			}
		}
		cout << hitung << endl;
	}
}