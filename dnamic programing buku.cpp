#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

//top-down
int solve(int x){
	if(x==0){
		return 0;
	}
	if(cek[x]){
		return memo[x];
	}
	int best = 1e9;
	for(int i=0; i<m; i++){
		if(a[i]<=x){
			best = min(best, solve(x-a[i])+1)
		}
	}
	cek[x]=true;
	memo[x]=best;
	return best;
}

//bottom-up
int solveB(){
	f[0] = 0;
	for(int i=1; i<=n; i++){ // untuk menghitung kemungkinan uang, misal = 1rb bis ditukar apa aja, 5rb bisa tukar apa aja
		int best = 1e9;
		for(int j=1; j<=m; j++){
			if(a[j]<=x){
				best = min(best, f[x-a[j]]+1);
			}
		}
		f[x]=best;
	}
	return f[n];
}

int main(){
	//dynamic programin
}