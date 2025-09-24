#include <iostream>
#include <string>
using namespace std;

int main(){
	string dna;
	cin >> dna;
	
	int hasil = 1;
	int terpanjang = 0;
	for(int i=0; i<dna.length(); i++){
		if(dna[i]==dna[i+1]){
			hasil++;
		}else{
			if(terpanjang < hasil){
				terpanjang = hasil;
			}
			hasil=1;
		}
	}
	
	cout << terpanjang;
	
	return 0;
}