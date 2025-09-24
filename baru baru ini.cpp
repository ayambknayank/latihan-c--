#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    vector<char> huruf(26, ' '); // Inisialisasi array huruf dengan spasi
    char awal = 'a';
    string baru = ""; // Inisialisasi string baru
    for (int i = 0; i < s.length(); i++) {
        if (huruf[s[i] - 'a'] != ' ') { // Jika sudah ada penggantinya dalam huruf
            s[i] = huruf[s[i] - 'a'];
        } else { // Jika belum ada penggantinya dalam huruf
        	if(s[i]==awal){
        		awal++;
			}
            baru += awal; // Tambahkan huruf awal ke string baru
            huruf[s[i] - 'a'] = awal; // Isi huruf baru ke vektor huruf
            s[i] = awal; // Ganti karakter s[i] dengan huruf baru
            if (awal < 'z') // Jika belum mencapai huruf 'z'
                awal++; // Pindah ke huruf berikutnya
            else
                awal = 'a'; // Kembali ke huruf 'a' jika sudah huruf 'z'
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
