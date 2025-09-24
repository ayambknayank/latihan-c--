#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	bool red = false;
        for(int i=0; i<8; i++){
        	string s;
        	cin >> s;
        	if(s=="RRRRRRRR") red=true;
		}
    	if(red){
    		cout << "R" << endl;
		}else{
			cout << "B" << endl;
		}
    }
    return 0;
}
