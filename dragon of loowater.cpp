#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		if(n==0 && m==0){
			break;
		}
	int dra[n+5]={0}, knight[m+5]={0};
		for(int i=0; i<n; i++){
			cin >> dra[i];
		}
		for(int i=0; i<m; i++){
			cin >> knight[i];
		}
		sort(dra, dra+n);
		sort(knight, knight+m);
		int hasil=0;
		bool bukti=false;
		if(n>m){
			bukti=true;
			//cout << "Loowater is doomed!" << endl;
		}else{
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(dra[i]<=knight[j]){
						hasil+=knight[j];
						knight[j]={-1};
						bukti = false;
						break;
					}else{
						bukti=true;
						break;
					}
				}
			}
			//cout << hasil << endl;
		}
		
		if(bukti){
			cout << "Loowater is doomed!" << endl;
		}else{
			cout << hasil << endl;
		}
	}
	return 0;
}