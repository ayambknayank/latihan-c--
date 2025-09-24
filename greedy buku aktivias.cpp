#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int activity_selection(int a[], int n){
	sort(a, a+n);
	int pilih = 0;
	int mulai = 0;
	for(int i=0; i<n; i++){
		if(a[i].first>=mulai){ //jika aktivitas a >= akhir aktivitas a-1
			pilih++;
			mulai = a[i].second; // mulai ubah ke waktu a selesai
		}
	}
	return pilih;
}

int main(){
	//algoritma greedy aktivitas seelction
}