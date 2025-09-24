#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
    bismillah
    int n, m;
    cin >> n >> m;
    vector<vector<char>> denah(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> denah[i][j];
        }
    }
    
    bool buntu = false;
    int belok = 0;
    int ambiguI, ambiguJ; // Variabel untuk menyimpan posisi ambigu terakhir
    int simpan; // Variabel untuk menyimpan nilai belok sebelumnya
    
    // dari atas
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // point buat reset jika menemui celah
            if(i+1 < n && denah[i+1][j]=='.' && denah[i][j+1]=='.'){
                ambiguI = i+1;
                ambiguJ = j;
                simpan = belok;
            }
            // jika menemui kondisi buntu
            if(j+1 < m && denah[i][j+1]=='#' && denah[i+1][j]=='#'){
                buntu=true;
            }
            if(buntu){
                // kembali ke posisi ambigu terakhir
                i = ambiguI;
                j = ambiguJ;
                belok = simpan; // Set nilai belok kembali ke nilai sebelumnya
                buntu = false; // Reset kondisi buntu setelah kembali ke posisi ambigu
            }
            // proses jalan jika menemui karakter '#'
            if(denah[i][j+1]=='#'){
                denah[i][j] = '#'; // tandai posisi ini telah dilalui
                j++; // pindah ke kanan
                belok++; // tambahkan jumlah belok
            }
        }
    }
    
    cout << belok << endl;
}
