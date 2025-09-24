#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	string s;
	cin >> s;
	int bisa=0;
	for(int i=0; i<s.length()-1; i++){
		if(s[i]!=s[i+1]){
			bisa++;
		}else{
			bisa=0;
		}
	}
}