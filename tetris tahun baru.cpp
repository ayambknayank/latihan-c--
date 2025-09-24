#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n; cin >> n;
	if(n%2==0){
		cout << n*n;
	}else{
		cout << n*n-1;
	}
	return 0;
}