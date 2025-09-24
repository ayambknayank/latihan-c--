#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	pair<int, int> jam[n];
	for(int i=0; i<n; i++){
		cin >> jam[i].first;
		cin >> jam[i].second;
	}
	sort(jam, jam+n);
	int pilih = 0;
	int mulai = 0;
	for(int i=0; i<n; i++){
		if(jam[i].first>mulai){ //jika aktivitas a >= akhir aktivitas a-1
			pilih++;
			mulai = jam[i].second; // mulai ubah ke waktu a selesai
		}
	}
	cout << pilih << endl;
}