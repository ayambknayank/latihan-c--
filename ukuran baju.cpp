#include <iostream>
using namespace std;

int main(){
	int b, p, l;
	cin >> b >> p >> l;
	/*
	int s = 10, 40, 90;
	int m = 14, 60, 120;
	int l = 18, 80, 180;
	int x = 25, 100, 220;
	*/
	
	if (b<=10 && p<=40 && l<=90 ){
		cout << "S";
	}else if (b<=14 && p<=60 && l<=120 ){
		cout << "M";
	}else if (b<=18 && p<=80 && l<=180 ){
		cout << "L";
	}else {
		cout << "X";
	}
	
	
	
}