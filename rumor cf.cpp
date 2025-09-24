#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
 
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> biaya(n);
	ll jml=0;
	for(int i=0; i<n; i++){
		cin >> biaya[i];
		jml+=biaya[i]; // men jml kan biaya agar langsung menjadi output jika m=0
	}
	
	if(m==0){
		cout << jml << endl;  //kasus khusus
		return 0;
	}
	
	vector<vector <int>> teman(n); // deklarasi vector teman untuk menyimpan teman ke-i siapa aja
	for(int i=0; i<m; ++i){
		int x, y;
		cin >> x >> y;
		teman[x-1].push_back(y-1); //teman x bertambah yaitu y
		teman[y-1].push_back(x-1); //teman y bertambah yaitu x
	}
	ll total=0; // untuk menghitung total biaya minimal
	vector<bool> cek(n, false); //untuk ngecek kalau teman ini udah dihutung belum
	
	for(int i=0; i<n; ++i){
		if(cek[i]==false){ //kalau belum di cek masuk
			queue<int> q; //deklarasi antrian untuk teman 
			q.push(i);	//tapi ini orang skrg yg mau di hitung koneksinya
			cek[i]=true; // kasih nili true kalau ini sudah dicek
			ll minimalbiaya = biaya[i]; // kasih minimal biaya nya ke dia
			while(!q.empty()){ //selama temannya masih ada jalankan
				int curr = q.front(); //untuk nginput teman yg mau di cek
				q.pop(); 		// ini untuk ngapus orang utama yang punya teman
				for(int j : teman[curr]){ // ini untuk nginput teman temannya orang utama
					if(!cek[j]){
						q.push(j);
						cek[j]=true;
						minimalbiaya = min(minimalbiaya, (ll)biaya[j]); //bandingin biaya minimal dengan biaya teman yang baru diinput
					}
				}
			}
			total+=minimalbiaya;
		}
	}
	cout << total << endl;
	return 0;
}