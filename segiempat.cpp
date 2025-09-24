#include<bits/stdc++.h>
using namespace std;

int n, m, x, y;

int main(){
	cin >> n >> m >> x >> y;
	int a=(n/x)*(m/y);
	int b=(n/y)*(m/x);
	cout << max(a, b) << endl;
}