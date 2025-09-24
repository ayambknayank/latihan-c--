#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<ll> a(n);
        long long jml=0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            jml+=a[i];
        }
        if(jml<=k){
            cout << n << endl;
            continue;
        }
        ll kanan = k/2 + k%2;
        ll kiri = k/2;
        int i=0, hasil=0; // inisialisasi variabel hasil
        while(kanan>0){
            if(kanan-a[i]>=0){
                kanan -= a[i];
                a[i]=0;
                i++;
                hasil++;
            }else{
                break;
            }
        }
        int x=n-1;
        while(kiri>0 && x >= i){
            if(kiri-a[x]>=0){
                kiri -= a[x];
                a[x]=0;
                x--;
                hasil++;
            }else{
                break;
            }
        }
        cout << hasil << endl;
    }
    return 0;
}
