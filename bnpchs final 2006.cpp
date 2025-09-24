#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	string kata, sama;
	while(t--){
		bool cek = true;
		int beda=0;
		cin >> kata;
		for(char a:kata){
			for(int i=0; i<sama.length(); i++){
				if(a==sama[i]){
					cek = false;
					break;
				}
			}
			if(cek){
				sama+=a;
				beda++;
			}
		}
		cout << beda << endl;
		sama={0};
	}
}