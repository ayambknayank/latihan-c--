#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	vec rumah(n);
	for(int i=0; i<n; i++){
		cin >> rumah[i];
	}
	int mati=0;
	bool cek = true;
	while(cek){
		cek = false;
		for(int i=0; i<n-2; i++){
			if(rumah[i]==1 && rumah[i+1]==0 && rumah[i+2]==1){
				rumah[i+2]=0;
				//cout << i+2 << endl;
				cek = true;
				mati++;
				i+=2;
			}
		}
	}
	cout << mati << endl;
	return 0;
}