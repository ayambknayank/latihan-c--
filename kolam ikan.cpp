#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, m, k;
	cin >> n >> m >> k;
	int ikan = n;
	vector<int> ember(m, 0);
	while(ikan>0){
		if(ember[0]<=k){
			ember[0]++;
		}
		for(int i=0; i<m; i++){
			if(ember[i]==k){
				if(i==m-1){  //jika ember paling kanan
					ember[i]=0; 
				}else{
					ember[i]=0;
					ember[i+1]++;
				}
			}
		}
		ikan--;
		
	}
	for(int i=0; i<m; i++){
		cout << ember[i] <<" ";
	}
}