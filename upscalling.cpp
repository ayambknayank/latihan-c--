#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void kotakkecil(int n){
	for(int i=1; i<=2; i++){
		for(int j=1; j<=2; j++){
			if(n%2==0){
				cout << ".";
			}else{
				cout << "#";
			}
		}
		cout << endl;
	}
}

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2; i<2*n+2; i++){
			for(int j=2; j<2*n+2; j++){
				int k = (j/2)%2;
				int l = (i/2)%2;
				if(l==0){
					if(k==0){
						cout << "#";
					}else{
						cout << ".";
					}
				}else{
					if(k==0){
						cout << ".";
					}else{
						cout << "#";
					}
				}
				
			}
			cout << endl;
		}
	}
}