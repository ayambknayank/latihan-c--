#include <bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
string s, t, x;

string lcs(string s, string t){
	int x = s.length();
	int y = t.length();
	string baru = "";
	int a=0;
	for(int i=0; i<x; i++){
		if(baru.length()==0){
			for(int j=0; j<y; j++){
				if(s[i]==t[j]){
					baru+=s[i];
					a=j;
					break;
				}
			}
		}else{
			for(int j=a; j<y; j++){
				if(s[i]==t[j]){
					baru+=s[i];
					a=j;
				}
			}
		}
	}
	return baru;
}

int main(){
	bismillah
	cin >> s >> t >> x;
	
	string LCS = lcs(s, t, slen, tlen);
	while(LCS.length()>0){
		
	}
}