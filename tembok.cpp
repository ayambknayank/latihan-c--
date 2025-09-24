#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, awal, rendah, tinggi;
	
	cin >> t;
	while(t--){
		tinggi =0;
		rendah=0;
		
		cin >> n;
		int tembok[n+1];
		for(int i=0; i<n; i++){
			cin >> tembok[i];
		}
		
		for(int i=0; i<n; i++){
			if(tembok[i]-tembok[i+1]<0){
				tinggi++;
			}else{
				rendah++;
			}
		}
		
		cout << "Case " << t << ": " << tinggi << " " << rendah << endl;
	}
}