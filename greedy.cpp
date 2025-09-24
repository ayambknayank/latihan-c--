#include<bits/stdc++.h>
using namespace std;

int n, x, y, sc, st;

int main(){
	pair<int, int> beruang[100];
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> x >> y;
		beruang[i].first = y;
		beruang[i].second = x;
	}
	cout << endl << " setelah diurutkan : " << endl;
	sort(beruang+1, beruang+n+1);
	sc=0;
	st=0;
	cout << "pekerjaan yang diambil = " << endl;
	for(int i=0; i<=n; i++){
		if(beruang[i].second >= st){
			sc++;
			st = beruang[i].first;
			cout << "(" << beruang[i].first << "," << beruang[i].second << ")" << endl;
		}
	}
	cout << sc << endl;
}