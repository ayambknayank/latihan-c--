#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int cari (int x){
	if(parent[x]==x){
		return x;
	}else{
		parent[x] = cari(parent[x]);
		return parent[x];
	}
}

void join(int a, int b){
	repA = cari(a);
	repB = cari(B);
	parent[repA] = repB;
}

int cek(int a, int b){
	return cari(a) = cari(b);
}

int main(){
	bismillah
	//masukan
	
	
	//proses
	for(int i=0; i<n; i++){ //untuk mengisi parent elemen itu dirinya sendiri
		parent[i]=i;
	}
	
}