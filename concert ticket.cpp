#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<int> harga;

int cari(int cari, int n){
    int awal = 0;
    int akhir = n - 1;
    int mid;
    while(awal <= akhir){
        mid = (awal + akhir) / 2;
        if(harga[mid] == cari){
            return mid; 
        }else if(harga[mid] < cari){
            awal = mid + 1;
        }else{
            akhir = mid - 1;
        }
    }
    return awal; 
}

signed main(){
    bismillah;
    int n, m;
    cin >> n >> m;
    harga.resize(n);
    for(int i = 0; i < n; ++i){
        cin >> harga[i]; 
    }
    sort(harga.begin(), harga.end());
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        int ii = cari(x, n);
        if(ii < n && harga[ii] == x){
            cout << harga[ii] << endl;
            harga.erase(harga.begin() + ii);
            n--; 
        }else{
            if(ii == 0){
                cout << -1 << endl;
            }else{
                bool cek = true;
                for(int j = ii - 1; j >= 0; j--){
                    if(harga[j] <= x){
                        cout << harga[j] << endl;
                        harga.erase(harga.begin() + j);
                        n--; 
                        cek = false;
                        break;
                    }
                }
                if(cek){
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}