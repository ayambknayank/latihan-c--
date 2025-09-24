#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

bool kuadrat(int n){
	int akar = sqrt(n);
	if(akar*akar==n){
		return true;
	}
	return false;
}

int cek_satuan(int n){
	
}

int main(){
	int n;
	cin >> n;
	if(kuadrat(n)){
		cout << n%10 << " " << ;
	}
}