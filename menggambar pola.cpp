#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i %2==0 & j%2==0){
				cout << '#';
			}else if(i%2==1 && j%2==1){
				cout << '*';
			}else{
				cout << '$';
			}
		}
		cout << endl;
	}
}