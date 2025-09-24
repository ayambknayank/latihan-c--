#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

// fungsi permutasi untuk menentkan permutasi
// bilangan bersebelahan yg tidak lebih dari k
// info soal https://cpc.compfest.id/courses/coderclass-01-pemrograman-dasar/chapters/F/problems/D

int n;
bool flag[1001];
int box[1001];

void permutasi(int pos, int k){
	if (pos <= n) {
		for (int i = 1; i <= n; i++) {
			if (!flag[i]) {
				box[pos] = i;
				flag[i] = 1;
				permutasi(pos+1, k);
				flag[i] = 0;
			}
		}
	} else {
		bool cek = true;
		for (int i = 2; i <= n; i++) {
			if(abs(box[i]-box[i-1])>k){
				cek = false;
				break;
			}
		}
		if(cek){
			for (int i = 1; i <= n; i++) {
				cout << box[i] << " ";
			}
			cout << "\n";
		}
	}
}

int main(){
    bismillah
    int k;
    cin >> n >> k;
    permutasi(1, k);
    
    return 0;
}
