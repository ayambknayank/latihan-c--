#include<iostream>
using namespace std;

int a, b, c, d;
int kiri () {
	d--;
	return c-a/b;
}

int kanan () {
	d--;
	return a + b-c;
}

void atas () {
	c = c/ 3;
	a -= 5;
}

int bawah (int x, int y, int z) {
a = x;
b = y;
c = z;
d = 0;

while (kiri () > kanan ()) {
	d = a + b + c + d;
	atas();
	b += 3;
	}
	d += b*c;
	d += x/y;
	return d-2*a;
}

int main(){
	cin >> a >> b >> c;
	cout << bawah(a,b,c);
}