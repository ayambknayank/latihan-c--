#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	string s, t;
	cin >> s >> t;
	for (char &c : s) {
        c = toupper(c);
    }
    for (char &c : t) {
        c = toupper(c);
    }
    if(s==t){
    	cout << "20/20" << endl;
	}else{
		cout << "x_x";
	}
	return 0;
}