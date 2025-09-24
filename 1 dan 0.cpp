#include<iostream>
#include<string>
using namespace std;

int z=0, e=0, r=0, o=0, n=0;

int main(){
	int t; cin >> t;
		string s;
		cin >> s;
		
	for(char a:s){
		if(a=='z'){
			z++;
		}else if(a=='e'){
			e++;
		}else if(a=='r'){
			r++;
		}else if(a=='o'){
			o++;
		}else if(a=='n'){
			n++;
		}
	}
	
	//cout << z << " " << e << " " << r << " " << o << " " << n << endl;
	while(true)
	if(o>0 && n>0 && e>0){
		cout << "1 ";
		o--;n--;e--;
	}else if(z>0 && e>0 && r>0 && o>0){
		cout << "0 ";
		z--;e--;r--;o--;
	}else{
		break;
	}
	
}