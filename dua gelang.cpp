#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x1, y1, x2, y2, r1, r2;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	
	int jarak = sqrt(((x2 - x1)*(x2 - x1) )+ ((y2 - y1)*(y2 - y1)));
	int jmlr = r1+r2;
	int selisih = abs(r1-r2);
	
	if(jarak<=jmlr && jarak >= selisih){
		cout << "bersentuhan";
	}else {
		cout << "tidak bersentuhan";
	}
	
	return 0;
}