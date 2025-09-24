#include<bits/stdc++.h>
using namespace std;

int main(){
	int hasil = 0;
	for(int i=2024; i<=4202; i++){
		if(i%2==0 || i%7==0 && i%14!=0){
			hasil++;
		}
	}
	cout << hasil;
}