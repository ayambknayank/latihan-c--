#include<iostream>
using namespace std;
#define ll long long

int main(){
	ll n, m;
	cin >> n >> m;
	ll kanan = 2*((4*(n-2))+((n-2)*(n-3)));
	ll kiri = 2*((4*(m-2))+((m-2)*(m-3)));
	cout << kanan + kiri;
}