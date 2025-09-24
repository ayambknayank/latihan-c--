#include<bits/stdc++.h>
using namespace std;

int tinggi, jatuh, persen;
 jarak;

//bool cek(int tinggi,double jarak,int jatuh,int persen){
//	int total=0;
//	while(tinggi>0){
//		jarak-=(lelah*jarak/100);
//		tinggi-=jarak;
//		if(tinggi)
//		hari++;
//	}
//	return true;
//}

int main(){
	while(cin >> tinggi >> jarak >> jatuh >> persen && tinggi !=0){
		int hari=1;
		bool sukses=true;
		int dasar = tinggi;
		while(tinggi>0){
			tinggi-=jarak;
			jarak-=(persen*jarak/100); //jaraknya berkurang terus
			if(jarak<=0 || tinggi >= dasar){
				sukses = false;
				break;
			}
			tinggi+=jatuh;
			hari++;
			cout << tinggi << " " << jarak << " " <<  jatuh << " " << persen << endl;
		}
		if(sukses){
			cout << "success on day " << hari << endl;
		}else{
			cout << "failure on day " << hari << endl;
		}
	} 
}