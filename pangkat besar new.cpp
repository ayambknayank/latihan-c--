#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int exp(int a, int b){
	if(b==0) return 1;
	ll res = exp(a, b/2);
	res = res*res%1000000;
	if(b%2) res = res*a%1000000;
	return res;
}

int main() {
	bismillah
    long long a, b;
    cin >> a >> b;
    int pangkat=exp(a, b);
    string angka = to_string(pangkat);
	if(pow(a, b)>999999){
		for(int i=0; i<6-angka.length(); ++i){
			cout << "0";
		}
		cout << angka;
	}else{
		cout << pangkat;
	}
	

    return 0;
}
