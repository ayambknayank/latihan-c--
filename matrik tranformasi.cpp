#include<iostream>
using namespace std;

int n, t, matrik[80][80], cek[80][80];

int main(){
	
	cin >> t >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> matrik[i][j];
		}
	}
	
	cin >> t >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> cek[i][j];
		}
	}
	
	bool identik = true;
	bool horisontal = true;
	bool vertikal = true;
	bool kanan = true;
	bool kiri = true;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(matrik[i][j] != cek[i][j]){
				identik = false;
			}
			if(matrik[i][j] != cek[n-i-1][j]){
				horisontal = false;
			}
			if(matrik[i][j] != cek[i][n-j-1]){
				vertikal = false;
			}
			if(matrik[i][j] != cek[j][i]){
				kanan = false;
			}
			if(matrik[i][j] != cek[n-j-1][n-i-1]){
				kiri = false;
			}
		}
	}
	
	if(identik){
		cout << "identik" << endl;
	}else if(horisontal){
		cout << "horisontal" << endl;
	}else if(vertikal){
		cout << "vertikal" << endl;
	}else if(kanan){
		cout << "diagonal kanan bawah" << endl;
	}else if(kiri){
		cout << "diagonal kiri bawah" << endl;
	}else{
		cout << "tidak identik" << endl;
	}
}