#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	for (int i = 1; i < n; i++){
		if (s[i] != s[i-1]){
		cout << s[i-1];	
		}
	}
 	cout << s[n-1] << endl;
	
	return 0;
}