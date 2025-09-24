#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int maks = -1;
	for(int i=0; i<n; i++){
		cin >> a[i];
		maks = max(maks, a[i]);
	}
	int total = 0;
	int banyak = 0;
	for(int i=0; i<n; i++){
		if(a[i]==maks){
			banyak++;
		}else{
			total = max(total, banyak);
			banyak=0;
		}
	}
	total = max(total, banyak);
	cout << total; 
}