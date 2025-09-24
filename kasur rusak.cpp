#include<iostream>
#include<string>
using namespace std;

bool polindrom(string s){
	if(s.empty()){
		return false;
	}else{
		int i=0, n=s.length()-1;
		while(i<n){
			if(s[i]!=s[n]){
				return false;
			}
			i++;n--;
		}
		return true;
	}
}

const int x=10;

int main(){
	string s;
	cin >> s;
	//cout << s.length() << endl;
	if(polindrom(s)){
		cout << "YA";
	}else{
		cout << "BUKAN";
	}

}