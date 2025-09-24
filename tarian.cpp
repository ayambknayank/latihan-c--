#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n; cin >> n;
	string s; int k;
	int curP=0, l=0, curL=0;
	int atas=0, bawah=0, kiri=0, kanan=0;
	while(n--){
		cin >> s >> k;
		if(s == "maju"){
			curP += k;
			atas = max(atas, curP);
		}else if(s == "mundur"){
			curP -= k;
			bawah = min(bawah, curP);
		}else if(s == "kanan"){
			curL += k;
			kanan = max(kanan, curL);
		}else if(s == "kiri"){
			curL -= k;
			kiri = min(kiri, curL);
		}
	}
	int panjang = atas - bawah;
	int lebar = kanan - kiri;
	cout << max(panjang, lebar) << " " << min(panjang, lebar);
}