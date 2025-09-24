#include<bits/stdc++.h>
using namespace std;

long long a,b,c,d, pembilang, penyebut, hasil;

int main(){
	cin >> a >> b >> c >> d;
	
	pembilang = b*d;
	penyebut = (a*d)+(b*c);
	
	hasil = __gcd(pembilang, penyebut);
	
	//cout << pembilang << " " << penyebut << " " << hasil << endl;
	cout << penyebut/hasil  << " " << pembilang/hasil;
}