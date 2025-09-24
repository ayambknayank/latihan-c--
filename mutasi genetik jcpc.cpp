#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	if (s.find(t) != string::npos) {
        cout << "YA" << endl;
    }else{
		cout << "TIDAK" << endl;
	}
}