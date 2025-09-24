#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    vector<char> huruf(26, ' '); // Inisialisasi array huruf dengan spasi
    char ganti = 'a';
    vector<bool> cek(26, false);
    string baru = ""; // Inisialisasi string baru
    for (int i = 0; i < s.length(); i++) {
        if (huruf[s[i] - 'a'] != ' ') { // Jika sudah ada penggantinya dalam huruf
            s[i] = huruf[s[i] - 'a'];
            baru+=s[i];
        } else { // Jika belum ada penggantinya dalam huruf
        	if(s[i]==ganti){
        		ganti++;
			}
			while(cek[ganti]==true){
				ganti++;
			}
			cek[ganti]=true;
            baru += ganti; // Tambahkan huruf awal ke string baru
            huruf[s[i] - 'a'] = ganti; // Isi huruf baru ke vektor huruf
            
			//jika lebih dari z akan reset ke a lagi
			if(ganti == 'z'){
            	ganti = 'a';
			}
			if (ganti != 'z'){ // Jika belum mencapai huruf 'z'
                ganti++; // Pindah ke huruf berikutnya
            }
            
        }
    }
    cout << baru << endl; // Output hasil string baru
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
