#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int n, x, k, jml, angka[3];

int main(){
	bismillah
	cin >> n;
	while(n--){
		jml=0;
		memset(angka, 0, sizeof(angka));
		cin >> x;
		for(int i=0; i<x; i++){
			cin >> k;
			angka[k]++;
			jml +=k;
		}
		if(jml%2==1){
			cout << "no" << endl;
		}else{
			if(angka[2]%2==0){
				if(angka[1]%2==0){
					cout << "yes" << endl;
				}else{
					cout << "no" << endl;
				}
			}else{
				if(angka[1]>=2 && angka[1]%2==0){
					cout << "yes" << endl;
				}else{
					cout << "no" << endl;
				}
			}			
		}
	}
	return 0;
}