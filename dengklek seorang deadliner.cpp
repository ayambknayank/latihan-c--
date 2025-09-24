#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int jam = n/3600;
	
	int menit = (n-jam*3600)/60;
	
	int detik = n-(3600*jam)-(60*menit);
	
	cout << jam << endl;
	cout << menit << endl;
	cout << detik << endl;
	
	return 0;
}