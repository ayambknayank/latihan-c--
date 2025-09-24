#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

bool comparePairs(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first != b.first) {
        return a.first < b.first; // Urutkan berdasarkan nilai pertama (ascending)
    } else {
        return a.second < b.second; // Jika nilai pertama sama, urutkan berdasarkan nilai kedua (ascending)
    }
}

void solve(){
    int n; cin >> n;
    string baru="";
    vector<pair<int, int>> koordinat(n);
    for(int i=0; i<n; i++){
        cin >> koordinat[i].first; // untuk x
        cin >> koordinat[i].second; // untuk y
    }
    sort(koordinat.begin(), koordinat.end(), comparePairs);
    int curX=0, curY=0;
    bool cek = false;
    for(int i=0; i<n-1; i++){
        if(koordinat[i].first-koordinat[i+1].first>0 || koordinat[i].second-koordinat[i+1].second>0){
            cek = true;
            break;
        }
        if(koordinat[i].first - curX>0){
            int cnt = koordinat[i].first - curX;
            while(cnt--){
                baru+='R';
            }
            curX = koordinat[i].first;
        }
        if(koordinat[i].second - curY>0){
            int cnt = koordinat[i].second - curY;
            while(cnt--){
                baru+='U';
            }
            curY = koordinat[i].second;
        }
    }
    //krena ga cukup input sampai box terakhir makanya nambah 1 operasi lagi
    if(koordinat[n-1].first - curX>0){
        int cnt = koordinat[n-1].first - curX;
        while(cnt--){
            baru+='R';
        }
        curX = koordinat[n-1].first;
    }
    if(koordinat[n-1].second - curY>0){
        int cnt = koordinat[n-1].second - curY;
        while(cnt--){
            baru+='U';
        }
        curY = koordinat[n-1].second;
    }
    
    if(cek==true){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << baru << endl;
    }
}

int main(){
    bismillah
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
