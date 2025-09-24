#include<iostream>
#include<string>
using namespace std;

int main(){
	string s; cin >> s;
	//97-122
	int huruf[125]={0}, hasil=0;
	for(char a: s){
		int x = int(a); //ngubah ke kode ASCII
		if(huruf[x]==0){
			huruf[x]++;
			hasil++;
		}
	}
	if(hasil%2==0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}
	
	return 0;
}