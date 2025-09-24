#include<bits/stdc++.h>
using namespace std;

long long hitung(long long x){
	return (x+2)/3;
}

int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long hari=0;
	if(b==0){
		if(c==0){
			hari = hitung(a+d);
		}else{
			hari = hitung(a+c)+hitung(d);
		}
	}else{
		if(c==0){
			hari = hitung(a)+hitung(b+d);
		}else{
			hari = hitung(a)+hitung(b+c)+hitung(d);
		}
	}
	cout << hari << endl;
}