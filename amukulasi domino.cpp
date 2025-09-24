#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
	long long n, m, hasil;
	cin >> n >> m;
	if(m==1){
		hasil = n-1;
		cout << hasil;
		return 0;
	}else{
		hasil = (m-1)*n;
		cout << hasil;
	}
	return 0;
}