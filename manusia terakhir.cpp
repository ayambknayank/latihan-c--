#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y;
	cin >> n >> x >> y;
	
	int r=0, l=0, u=0, d=0;
	if(x>0){
		r+=x;
	}else{
		l-=x;
	}
	if(y>0){
		u+=y;
	}else{
		d-=y;
	}
	
	int sisa = n-(r+l+u+d);
	if(sisa<0 || sisa%2==1){
		cout << -1 << endl;
	}else{
		u+=sisa/2;
		d+=sisa/2;
		cout << u << " " << r << " " << d << " " << l << endl;
	}
}