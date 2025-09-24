#include<bits/stdc++.h>
using namespace std;

int r, c,a, b, x, y;

int abss(int x){
	if(x>0)return x;
	else return x*-1;
}

int main(){
	cin >> r >> c >> a >> b >> x >> y;
	if(((x-a)>=abss(y-b)) && (((x-a)%2)==(abss(y-b)%2)) && a<x){
		cout << "YA" << endl;
	}else{
		cout << "TIDAK" << endl;
	}
}