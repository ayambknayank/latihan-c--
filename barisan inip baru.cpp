#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	ll n;
	cin >> n;
	ll total=0;
	vector<int>baris(n);
	ll simpan;
	for(int i=0; i<n; i++){
		cin >> baris[i];
		ll hasil=1;
		if(i>0 && baris[i]>=baris[i-1]){
			hasil+=simpan;
			if(i-simpan>0){
				for(int j=i-simpan-1; j>=0; j--){
					if(baris[i]>=baris[j]){
						hasil++;
					}else{
						break;
					}
				}
			}
		}
		simpan = hasil;
		total += hasil;
		//cout << hasil << endl << endl;
	}
	cout << total;
}