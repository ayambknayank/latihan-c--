#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	
	int tebak;
	string jawab;
	cin.ignore();
  while(a<=b){
  	tebak = (a+b)/2;
  	cout << tebak << endl;
  	
  	getline(cin, jawab);
  	if(jawab == "selamat") break;
  	if(jawab == "terlalu kecil") a = tebak +1;
  	else if(jawab == "terlalu besar") b = tebak -1;
  	else cout << "HAH??!!" << endl;
  	
  }
  return 0;
}