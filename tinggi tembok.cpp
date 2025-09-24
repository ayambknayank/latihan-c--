#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, tembok, awal, rendah, tinggi, no=1;
	cin >> t;
	while(t--){
		tinggi =0;
		rendah=0;
		
		cin >> n;
		cin >> awal;
		while(n>1){
			cin >> tembok;
			if(awal>tembok){
				rendah++;
			}else if(awal<tembok){
				tinggi++;
			}
			awal = tembok;
			n--;
		}
		cout << "Case " << no << ": " << tinggi << " " << rendah << endl;
		no++;
	}
}