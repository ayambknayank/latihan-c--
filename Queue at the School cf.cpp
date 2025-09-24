#include<bits/stdc++.h>
using namespace std;

int n, t;
string siswa;

int main(){
	cin >> n >> t;
	cin >> siswa;
	
	while(t--){
		for(int i=0; i<siswa.length()-1; i++){
			if(siswa[i]=='B' && siswa[i+1]=='G'){
				swap(siswa[i], siswa[i+1]);
				i++;
			}
		}
	}
	cout << siswa;
}