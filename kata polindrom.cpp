	#include <iostream>
	#include <string>
	using namespace std;
	
	string cek(const string& p){
		if (p.empty()){
			return "BUKAN";
			}
		for (int o=0; o<p.length()/2; o++){
			
				char awal = p[o];
				char akhir = p[p.length()-o -1];
				
				if (awal != akhir){
					return "BUKAN";
				}
			}
			return "YA";
		
	}
	
	int main(){
		string a;
		cin >> a;
		
		cout << cek (a);
		
		return 0;
	}