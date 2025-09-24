#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int MOD = 1e9+7;

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int x;
		cin >> x;
		vector<int> at(x), ba(x);
		for(int i=0; i<x; i++){
			cin >> at[i];
		}
		for(int i=0; i<x; i++){
			cin >> ba[i];
		}
		sort(at.begin(), at.end());
		sort(ba.begin(), ba.end(), greater<int>());
		// cek urutan
//		for(int i=0; i<x; i++){
//			cout << at[i] << " ";
//		}
//		cout << endl;
//		for(int i=0; i<x; i++){
//			cout << ba[i] << " ";
//		}
//		cout << endl << endl;
		ll hasil = 1;
        for (int i=0; i<x; i++){
            int hitung = at.size() - (upper_bound(at.begin(), at.end(), ba[i]) - at.begin());
		    if (hitung - i > 0) {
		        hasil *= hitung - i;
		    } else {
		        hasil *= 0;
			}
			hasil %= MOD;
        }
        cout << hasil << endl;
	}
}