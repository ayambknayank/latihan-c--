#include <bits/stdc++.h>
using namespace std;

#define int long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

bool kapital_semua(const string& s){
	for(auto& a:s){
		if(!isupper(a)) return false;
	}
	return true;
}

bool kapital_kecuali_awal(const string& s){
	for(int i=1; i<s.length(); i++){
		if(!isupper(s[i]))return false;
	}
	return true;
}

string proses(const string& kata){
	if(kapital_kecuali_awal(kata) || kapital_semua(kata)){
		string baru = kata;
		for(auto& a : baru) {
	        if(isupper(a)){
	        	a = tolower(a);
			}else{
				a = toupper(a);
			}
	    }
	    return baru;
	}
	return kata;
}

signed main() {
    string s;
    cin >> s;
    cout << proses(s);
    
    return 0;
}
