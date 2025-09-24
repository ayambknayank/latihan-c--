#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

//cout << a[k/2+1] << endl;
// -> ambil setengah  array terakhir
// -> buat array [tengah + 1] sampai array [n] menjadi sama
//		jika jml penambahan ini lebih dari k, maka buat nilai array[mid] 
//			m=menjadi sama dengan array[n]
//				jika k tidak cukup untuk mengubah nilai a[mid[ menjadi
//				a[n] maka keluarkan a[mid]+=k;
//				jika cukup, ubah nilai a[mid] lalu k-=(a[n]-a[mid], lalu lanjutan 
//				dengan melakukan penambahan nilai pada index a mulai dari belakang
//				hingga a[mid], dan berhenti apabila k=0
//			jika operasi sudah selesaikan keluarkan nilai a[mid] 


signed main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
	//sampai sini udah benar fiks
	
    int idx = (n)/2;
    int median = a[idx];
    for(int i=idx; i+1<n; i++){
    	if(a[i]!=a[i+1]){
    		k-=(a[i+1]-a[i])*(i-idx+1);
    		a[idx] = a[i+1];
		}
		if(k<=0){
			cout << a[idx];
			return 0;;
		}
	}
    a[idx] += k/(n-idx);
    cout << a[idx] << endl;
    return 0;
}