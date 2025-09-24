#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	vector<double> nilai(t);
	for(int i=0; i<t; i++){
		cin >> nilai[i];
	}
	sort(nilai.begin(), nilai.end());
	double hasil;
	if(t%2==0){
		hasil = (nilai[t/2-1]+nilai[t/2])/2.0;
	}else{
		hasil = nilai[t/2]/1.0;
	}
	cout << fixed << setprecision(1) << hasil;
}