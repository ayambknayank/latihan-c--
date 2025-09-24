#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
	string s;
	cin >> s;
	
	for (char c : s){
		if (isupper(c)){
			char tukar = tolower(c);
			cout << tukar;
		}else {
			char tukar = toupper(c);
			cout << tukar;
		}
	}
}
ngentot