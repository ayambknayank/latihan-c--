#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	int x3 = x1 - x2;
	int y3 = y1 - y2;
	if (x3 < 0){
		x3 = -x3;
	}
	if (y3 < 0){
		y3 = -y3;
	}
	cout << x3 + y3;
}