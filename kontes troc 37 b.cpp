#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int n; cin >> n; // number of elements
    int k; cin >> k; // some divisor
    int summ = 0;

    vector<pair<int, int>> tipe(n);
    
    for(int i = 0; i < n; i++) {
        cin >> tipe[i].first;
    }
    
    for(int i = 0; i < n; i++) {
        cin >> tipe[i].second;
        summ += tipe[i].second;
    }
    
    sort(tipe.begin(), tipe.end());
    
    int xx = (k - tipe[0].first) - (summ - tipe[0].second);
    if(summ > k){
    	k-=tipe[0].first;
    	summ-=tipe[0].second;
	}
	
	if(summ%k==0){
		cout << summ/k;
	}else{
		cout << (summ/k)+1;
	}
    return 0;
}
