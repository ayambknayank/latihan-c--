#include<bits/stdc++.h>
using namespace std;

bool valid(string x){
	int i = 0, d=0;
	for(auto a:x){
		if(a>='a' && a<='z'){
			i++;
		}
		if(a>='0' && a<='9'){
			d++;
		}
	}
	return d>0 && i>=3;
}

int main(){
	
	string t, res="";
	while(cin >> t){
		bool akhir=(t.back()=='.');
		if(akhir){
			t.pop_back();
		}
		if (valid(t)){
			if(res.length() < t.length()){
				res=t;
			}
		}
		if(akhir){
			break;
		}
	}
	if(res==""){
			cout << "NO";
	}else{
			cout << res << endl;
			cout << res.length();
	}
}