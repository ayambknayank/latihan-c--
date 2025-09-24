#include<bits/stdc++.h>
using namespace std;

int MAKS = 1000000007;

int faktorial(int x){
	if(x==1) return 1;
	if(b==x) return;
	return x*faktorial(x-1);
}

//int kombin(int a, int b){
//	return faktorial(a)/faktorial(b)*faktorial(a-b);
//}

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int ans = kombin(k, n);
	cout << ans << endl;
}