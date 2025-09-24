#include<bits/stdc++.h>
using namespace std;

int n, t, angka[1001], baru, operasi=0;

bool cek(int a, int b){
	if(max(a,b)/min(a, b)>2){
		return false;
	}
	return true;
}

bool dense(vector <int> angka){
	for(int i=0; i<angka.size()-1; i++){
			if(!cek(angka[i], angka[i+1])){
				return false;
		}
	}
	return true;
}

int main(){
	cin >> n;
	while(n--){
		cin >> t;
		vector <int> angka(t);
		for(int i=0; i<t; i++){
			cin >> angka[i];
		}
		operasi=0;
		while(!dense(angka)){
			for(int i=0; i<angka.size()-1; i++){
				if(!cek(angka[i], angka[i+1])){
					baru = angka[i]*2;
					angka.insert(angka.begin() + i+1, baru);
					operasi++;
					break;
				}
			}
		}
		cout << operasi << endl;
		for(int i=0; i<angka.size()-1; i++){
				cout << angka[i] << " ";
		}
		cout << endl;
	}
}