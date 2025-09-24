#include <iostream>
#include <string>
using namespace std;

bool cetak(string awal, string match){
	int star = awal.find("*");
	
	if (awal.size()-1 > match.size()){
		return false;
	}
	
	string depan = awal.substr(0, star);
	string akhir = awal.substr(star+1);
	
	string depan_match = match.substr(0, depan.size());
	string akhir_match = match.substr(match.size()-akhir.size(), akhir.size());
	
	return depan == depan_match && akhir == akhir_match;
	
}

int main(){
	string awal;
	cin >> awal;
	
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++){
		string match;
		cin >> match;
		if (cetak(awal, match)){
			cout << match << endl;
		}
	}
	
	return 0;
}