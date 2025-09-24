#include<bits/stdc++.h>
using namespace std;

int p(int n, int k){
	if(n==1)return 1;
	else return (p(n-1, k)+k-1)%n+1;
}

int main(){
	int hasil = p(70, 3);
	cout << hasil;
	return 0;
}