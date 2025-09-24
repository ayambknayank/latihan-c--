#include<bits/stdc++.h>
using namespace std;

int n, k, peserta[1001], jml;
//vector<int> peserta;

int main(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> peserta[i];
	}
	for(int i=1; i<=n; i++){
		if(peserta[i]>=peserta[k] && peserta[i]>0){
			jml++;
		}
	}
	cout << jml << endl;
}