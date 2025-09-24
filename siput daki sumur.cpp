#include<iostream>
#include<cmath>
using namespace std;

int tinggi, jarak, jatuh, persen;

int main(){
	while(cin >> tinggi >> jarak >> jatuh >> persen && tinggi !=0){
		double tinggiskrg = 0.0;
		double sumur = jarak*1.0;
		double kelelahan = (persen/100.0)*jarak;
		int hari = 1;
		
		while(true){
			tinggiskrg += max(0.0, sumur);
			if(tinggiskrg>tinggi){
				cout << "success on day " << hari << endl;
				break;
			}
			tinggiskrg-=jatuh;
			if(tinggiskrg<0){
				cout << "failure on day " << hari << endl;
				break;
			}
			sumur-=kelelahan;
			hari++;
		}
	} 
	return 0;
}