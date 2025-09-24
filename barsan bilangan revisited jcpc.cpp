#include<bits/stdc++.h>
using namespace std;
#define int long long

int fpb(int a, int b){
	if(b==0) return a;
	return fpb(b, a%b);
}

int kpk(int a, int b){
	return a*b/fpb(a,b);
}

// konsep buat nyari brp byk bilangan yg habis dibagi a || b tetapi tdk keduanya
int jumlah_bilangan(int a, int b, int x, int l){
	return (x/a)+(x/b)-(x/l);
}

signed main(){
	int n, a, b;
	cin >> n >> a >> b;
	int bawah = 1, atas = 1e18;
	int ans=-1, kkpk = kpk(a, b);
	//pakai konsep binary search buat nyari kemungkinannya
	while(bawah<=atas){
		int mid = bawah+(atas-bawah)/2;
		if(jumlah_bilangan(a, b, mid, kkpk)>=n){
			ans = mid;
			atas = mid-1;
		}else{
			bawah = mid+1;
		}
	}
	cout << ans;
}