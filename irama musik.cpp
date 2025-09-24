#include<bits/stdc++.h>
using namespace std;

int main(){
	string nada;
	
	while(true){
		cin >> nada;
		int birama=0, benar=0;
		bool cek = true;
		for(char a:nada){
			if(a == '/'){
				int hasil = birama-64;
				if(hasil==0){
					benar++;
				}
				birama=0;
			}else if(a == 'W'){
				birama+=64;
			}else if(a == 'H'){
				birama+=32;
			}else if(a == 'Q'){
				birama+=16;
			}else if(a == 'E'){
				birama+=8;
			}else if(a == 'S'){
				birama+=4;
			}else if(a == 'T'){
				birama+=2;
			}else if(a == 'X'){
				birama+=1;
			}else if(a=='*'){
				cek=false;
				break;
			}
		}
		
		
		if(cek){
			cout << benar << endl;
		}else{
			break;
		}
		
	}
}