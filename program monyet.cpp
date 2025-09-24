#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	
	while(t--){
		cin >> n;
		int tangga[n+5]={0};
		int hasil=0, besar=0, no=1;
		for(int i=1; i<n; i++){
			cin >> tangga[i];
		}
		int x=0;
		for(int j=0; j<n; j++){
			hasil=tangga[j+1]-tangga[j];
			if(hasil>besar){
				besar=hasil;
			}else if(hasil==besar){
				besar++:
			}
		}
	
		cout << "Case " << no << ": " << besar << endl;
		no++;
	}
}