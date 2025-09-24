#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t;cin >> t;
	for(int i=0; i<t; i++){
		cin >> nilai[i];
		if(nilai[i]==1){
			satu++;
		}else if(nilai[i]==2){
			dua++;
		}else{
			tiga++;
		}
	}
	int tim = min(min(satu, dua), tiga);
	cout << tim << endl;
	while(tim--){
		
	}
}