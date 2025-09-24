#include<bits/stdc++.h>
using namespace std;

int main(){
    int hari, n, m, k, guna=0;
    cin >> n >> m >> k;
    vector<int> botol(n);
    for(int i=0; i<n; i++){
        cin >> botol[i];
    }
    sort(botol.begin(), botol.end());
    hari=m;
    int i = 0;
    while (i < n) {
        hari += k;
        if (hari < botol[i]) {
            guna++;
            hari = botol[i];
            i++;
        } else {
            i++;
        }
    }
    cout << guna << endl; // Menampilkan sisa botol yang tidak digunakan
    return 0;
}
