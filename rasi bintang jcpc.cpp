#include<bits/stdc++.h>
using namespace std;

#define int long long

double gradien(int a, int b, int aa, int bb){
	return ((1.00*abs(bb-b))/abs(aa-a));
}

int ygaris(int m, int aa, int b, int a){
	return (m*aa)+(b-(m*a));
}

void solve(int i){
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "Case #" << i << ": ";
//	// segaris
//	int xgr = abs(x2-x1);
//	int ygr = abs(y2-y1);
//	int xxgr = abs(x3-x2);
//	int yygr = abs(y3-y2);
//	if(xgr == xxgr && ygr == yygr){
//		cout << "rasi ular" << endl;
//	}
//	
//	// dibawah garis
//	else if(y2>=y3 && x1>=x3){
//		cout << "rasi kucing" << endl;
//	}
//	// selain itu semua
//	else{
//		cout << "rasi anjing" << endl;
//	}
	int grad = gradien(x1, y1, x2, y2);
	int titik = ygaris(grad, x3, y1, x1);
	if(y3<titik){
		cout << "rasi anjing" << endl;
	}else if(y3==titik){
		cout << "rasi ular" << endl;
	}else{
		cout << "rasi kucing" << endl;
	}
}

signed main(){
	int q;
	cin >> q;
	for(int i=1; i<=q; i++){
		solve(i);
	}
}