#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, setuju = 0;
vector<int> anggota;
vector<vector<int>> hubungan;
vector<bool> orang;
int salah=0;

void tambah(int i){
	if(orang[i]){
		for (int k : hubungan[i]) {
            setuju += anggota[k];
        }
	}else{
		for (int k : hubungan[i]) {
            salah += anggota[k];
            orang[k]=false;
        }
	}
}

void ubah(int i) {
    if(orang[i]){
		for (int k : hubungan[i]) {
            salah += anggota[k];
            orang[k]=false;
        }
	}else{
		for (int k : hubungan[i]) {
            setuju += anggota[k];
        }
	}
}

signed main() {
    cin >> n;
    anggota.resize(n + 1);
    hubungan.resize(n + 1);
    orang.resize(n + 1, true);
    // hubungan dg atasan
    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        hubungan[x].push_back(i); // hubungkan bawahan langsung
    }
    // anggota
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        anggota[i] = x; // ngasih nilainya
//        ans += x; // jumlahin kalau d = 0
    }
    // cek kondisinya
    setuju+=anggota[1];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x != 0) { //berarti ini beda
            ubah(i);
        }else{		  //ini tetap sama ke bawah
        	tambah(i);
		}
    }
    //cout << setuju << " " << salah << endl;
    cout << abs(setuju-salah) << endl;
}
