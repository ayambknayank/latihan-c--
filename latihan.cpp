#include <iostream>
using namespace std;


int main(){
	int m, n;
	cin >> m >> n;
	
	int hasilbin = 0;
	int hasildan = 0;
	for(int i=0; i<m; i++){
		if(i%2==0){
			for(int j=0; j<i; j++){
				cout << "*";
				hasilbin++;
			}
		}else{
			for(int j=0; j<n; j++){
				cout << "&";
				hasildan++;
			}
		}
		
	}
	cout << hasilbin << endl;
	cout << hasildan;
	return 0;
}