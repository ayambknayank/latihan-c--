#include<bits/stdc++.h>
using namespace std;

int t;
stack<char> data;
string s;

void hitung(){
	t = s.length();
	for(int i=0; i<t; i++){
	    if(data.empty()){
	    	data.push(s[i]);
		}else if((data.top()=='[' && s[i]==']') || (data.top()=='('&&s[i]==')')){
			data.pop();
		}else{
			data.push(s[i]);
		}
	}
	if(data.empty()){
		cout << "ya" << endl;
	}else{
		cout << "tidak" << endl;
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		//jika data masih berisi (bekas yg sebelumny) kosongkan dulu
		while(!data.empty()){
			data.pop();
		}
	}
}