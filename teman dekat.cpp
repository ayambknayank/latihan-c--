#include <iostream>
#include <algorithm>
using namespace std;

int t(int x1, int x2, int y1, int y2, int d){
	int dx = abs(x1-x2);
	int dy = abs(y1-y2);
	int z;
	if (d==1){
		z=dx+dy;
	}else if (d==2){
		z=dx*dx + dy*dy;
	}else if (d==3){
		z=dx*dx*dx + dy*dy*dy;
	}
	return z;
}

int main(){
	int n, d, ma=0, mi=1e9;
	
	cin >> n >> d;
	int x[n], y[n];
	for (int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			mi = min(mi, t(x[i], x[j], y[i], y[j], d));
			ma = max(ma, t(x[i], x[j], y[i], y[j], d));
		}
	}
	cout << mi << " " << ma << endl;
	
	return 0;
}