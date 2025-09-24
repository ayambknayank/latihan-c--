#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	string s;
	cin >> s;
	
	//hilangakn huruf selain osnp
	string baru="";
	int pek=1;
	bool cekpe=false, ceko=false, cekes=false, ceken=false;
	
	while (!s.empty() && s.back() != 'P'){
		s.pop_back();
	}
	//cout << s << endl;
	
	if(s.empty()){
		cout << -1;
		return 0;
	}
	
	for(int i=0; i<s.length(); i++){
		if(s[i]=='O' || s[i]=='S' || s[i]=='N' || s[i]=='P'){
			if(s[i]=='O'){
				ceko=true;
			}else if(s[i]=='S'){
				cekes=true;
			}else if(s[i]=='N'){
				ceken=true;
			}
			baru.push_back(s[i]);
		}
	}
	//cout << baru.length() << endl;
	
	if(!ceko || !cekes || !ceken){
		cout << -1;
		return 0;
	}
	
	int total=baru.length();
	//cout << total << " ini strig osnp" << endl;
	for(int i=0; i<baru.length()-1; i++){
		if(baru[i]=='P' && baru[i+1]!='P'){
			total-=pek;
			pek=1;
		}else if(baru[i]=='P' && baru[i+1]=='P'){
			pek++;
		}
	}
	if(total<4){
		cout << -1;
		return 0;
	}
	cout << total;
}