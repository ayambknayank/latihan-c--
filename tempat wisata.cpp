#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int32_t main(){
    bismillah
    int n, m;
    cin >> n >> m;
    pair<int, int> turis[n+2];
    vector<int> mulai(n), akhir(n);
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        turis[i]= make_pair(x, y);
        mulai[i]=x; // Mulai dari akhir
        akhir[i]=y; // Selesai dari awal
    }

	//sort(salin.begin(), salin.end());
	
//	for(int i=0; i<n; i++){
//		int ans=0;
//		for(int j=0; j<n; j++){
//			if(turis[j].first>turis[i].second && turis[j].first>turis[i].second){
//				continue;	
//			}else if(turis[j].first<turis[i].first && turis[j].second<turis[i].first){
//				continue;
//			}
//			ans++;
//		}
//		cout << ans-1 << endl;
//	}

    sort(mulai.begin(), mulai.end());
    sort(akhir.begin(), akhir.end());

    for(int i=0; i<n; i++){
        int kanan = upper_bound(mulai.begin(), mulai.end(), turis[i].second) - mulai.begin();
        int kiri = lower_bound(akhir.begin(), akhir.end(), turis[i].first) - akhir.begin();
        cout << kanan - kiri - 1<< endl;
    }
}
