#include <iostream>
using namespace std;
 
int main() {
	int a; cin >> a; string s;
	while (a--) {
		cin >> s;
		cout << s;
		for (int i=s.length()-1;i>=0;i--) {
			cout << s[i];
		}
		cout << endl;
	}	
}