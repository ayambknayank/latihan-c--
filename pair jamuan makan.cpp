#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	vector<pair<int, int>> waktu(n);
	for(int i=0; i<n; i++){
		int y, x;
		cin >> x >> y;
		waktu[i].first = x+y;
		waktu[i].second = x;
	}
	sort(waktu.begin(), waktu.end());
	int pilih=1;
	int awal=waktu[0].first;
	for(int i=0; i<n; i++){
		if(awal <= waktu[i].second){
			pilih++;
			awal = waktu[i].first;
		}
	}
	cout << pilih << endl;
}