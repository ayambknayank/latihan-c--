#include<bits/stdc++.h>
using namespace std;

int x[4], a, b, c;

int main(){
	cin >> x[0] >> x[1] >> x[2] >> x[3];
	sort(x, x+4);
	c=x[3]-x[0];
	a=x[1]-c;
	b=x[2]-c;
	cout << a << " " << b << " " << c << " " << endl;
}