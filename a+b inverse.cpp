#include<iostream>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

void solve(){
	int n;
	cin >> n;
	if(n%2==0){
		int hasil =n/2;
		cout << hasil << " " << hasil;
	}else if(n%3==0){
		int hasil =n/3;
		cout << hasil << " " << n-hasil;
	}else if(n%5==0){
		int hasil =n/5;
		cout << hasil << " " << n-hasil;
	}else if(n%7==0){
		int hasil =n/7;
		cout << hasil << " " << n-hasil;
	}else if(n==1){
		cout << 0 << " " << 1;
	}else{
		cout << 1 << " " << n-1;
	}
}

int main(){
	bismillah
	solve();
}