#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

/*
masukkan kasus t
masukkan input u ke dalam vector sebanyak n
jika n=3 ^ v[1] ganjil cout 1
selain itu 
deklarasi cnt dan y
jika elemen dalam vector =1 maka cnt++, vector dimulai dari 1-n-2
jika cnt==n-2, cout -1
selain itu buat for dimulai dari 1-n-2
y ditambah dengan vector+1 /2
*/

/*
buat t kasus
deklarasikan n, bool, dan cnt
jalankan for dari index 0 - n-1
masukkan inputan array
program dimulai ketika i>0 dan i<n-1
jika elemenen-i ganjil, maka cnt += elemenn-i tambah satu /2
selain itu cnt += elemen-i/2
jika elemen-i lebih dari satu bool true;

jika n==3 && elemen-i ganjirl || bool false cout -1
selain itu cout cnt
*/

void solve(){
	ll n; cin >> n;
	ll tot=0;
	bool cek = false;
	vector<ll> a(n+1); 
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(i>0 && i<n-1){
			if(a[i]%2==1){
				tot += (a[i]+1)/2;
			}else{
				tot += a[i]/2;
			}
			if(a[i]>1){
				cek = true;
			}
			
		}
	}
	if((n==3 && a[1]%2==1) || cek==false){
		cout << "-1" << endl;
	}else{
		cout << tot << endl;
	}
}

int main(){
	bismillah
	int t; cin >> t;
	while(t--){
		solve();
	}
}