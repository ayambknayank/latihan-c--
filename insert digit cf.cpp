#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int x, y;
        string s;
        cin >> x >> y >> s;
        bool cek = true;
        for (int i = 0; i < x; ++i) {
            if (s[i] - '0' >= y) {
	            cout << s[i];
	        } else {
	            cout << y;
	            for (int j = i; j < x; ++j) {
	                cout << s[j];
	            }
	            cout << '\n';
	            cek = false;
	            break;
	        }
        }
        if(cek){
        	cout << y << endl;
		}else{
			continue;
		}
        
    }
    return 0;
}
