#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void greedy(vec& koin, int bayar){
	sort(koin.begin(), koin.end(), greater<int>());
	for(int i=0; i<koin.size(); i++){
		int hitung = bayar/koin[i];
		if(hitung > 0){
			cout << "koin " << koin[i] << " sebanyak " << hitung << " koin" << endl;
			bayar -= hitung*koin[i];
		}
	}
}

int main(){
	vec koin = {1, 5, 10, 15, 20};
	int bayar = 43;
	greedy(koin, bayar);
}