#include <iostream>
#include <string>
using namespace std; 
 
int main() {
    int t, n;
    string hukuman;
    cin >> t;
    	
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin.ignore(); 
        getline(cin, hukuman);
        cout << "Kasus #" << i+1 << ":" << endl;
    	for (int j = 0; j < n; j++) {
    	    cout << hukuman << endl;
    	}
    }
}
