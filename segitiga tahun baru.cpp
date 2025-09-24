#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n; cin >> n;
	if(n==2 || n==3 || n==5){
		cout << "4";
	}else{
		cout << "3";
	}
	return 0;
}