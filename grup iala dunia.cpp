#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n, box[11], tim[6];
bool cek;

void proses(int pos){
	if(pos <= n*(n-1)/2){
		for(int i=1; i<=3; i++){
			box[pos] = i;
			proses(pos+1);
		}
	}else{
		int poin[n+1];
		memset(poin, 0, sizeof poin);
		int laga = 1;
		for(int i=1; i<=n; i++){
			for(int j=1+i; j<=n; j++){
				if(box[laga]==1){
					poin[i] += 3;
				}else if(box[laga]==2){
					poin[j] += 3;
				}else{
					poin[i]++;
					poin[j]++;
				}
				laga++;
			}
		}
		bool sama = 1;
		for(int i=1; i<=n; i++){
			if(tim[i] != poin[i]){
				sama = 0;
			}
		}
		cek |= sama;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> tim[i];
		}
		cek = false;
		proses(1);
		if(cek){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}