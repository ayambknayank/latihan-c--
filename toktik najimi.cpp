#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int awal, tenaga;

int main(){
	bismillah
	int n;
	cin >> n;
	int power[200001];
	for(int i=0; i<n; i++){
		cin >> power[i];
	}
	sort(power, power+n);
	
	for(int i=0; i<n; i++){
		if(power[i]>=tenaga){ // kondisi jika dia menang
			int simpan = tenaga;
			tenaga = power[i]+1;
			awal += tenaga-simpan;
		}
		tenaga+=power[i];
		if(tenaga>1e9) break;
	}

	cout << awal << endl;
}