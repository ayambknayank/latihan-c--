#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void pilihan_kuliah(vector<pair<int, int>>& jam){
	int akhir_jam = -1;
	for(const auto& waktu: jam){
		if(waktu.first >= akhir_jam){
			cout << "Mulai: " << waktu.first << " - " << waktu.second << endl;
			akhir_jam = waktu.second;
		}
	}
}

int main(){
	vector<pair<int, int>> jam = {{1, 3}, {2, 4}, {3, 6}, {5, 7}, {8, 10}, {9, 11}};
	pilihan_kuliah(jam);
}