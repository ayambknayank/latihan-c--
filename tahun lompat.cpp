#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
int main(){
	cin >> n >> a >> b >> c;
	
	int cek=0;
	if(n%a==0&&n%b!=0){
		cek++;
	}
	if(n%c==0){
		cek++;
	}
	if(cek==0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}