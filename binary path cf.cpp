#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		vector<int> atas(n), bawah(n);
		for(int i=0; i<n; i++){
			cin >> atas[i];
		}
		for(int i=0; i<n; i++){
			cin >> bawah[i];
		}
		//prefix sum
		vector<int> prefix_atas(n), prefix_bawah(n);
		prefix_atas[0]=atas[0];
		prefix_bawah[0]=bawah[0];
		for(int i=1; i<n; i++){
			prefix_atas[i] = prefix_atas[i-1]+atas[i];
			prefix_bawah[i] = prefix_bawah[i-1]+bawah[i];
		}
		//cari jalan terpendek
		int jalan=atas[0];
		bool pindah=0;
		for(int i=1; i<n; i++){
			if(atas[i]<bawah[i-1] && pindah==false){//geser ke samping
				jalan+=atas[i];
			}else{
				jalan+=bawah[i];
				i--;
			}
		}
		cout << jalan << endl;
	}
}