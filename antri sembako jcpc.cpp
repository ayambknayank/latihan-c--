#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<string> data; 
	for(int i=0; i<n; i++){
		int x; 
		string s;
		cin >> x;
		if(x==1){
			cin >> s;
			data.push_back(s);
		}else{
			cout << data[0] << endl;
			data.erase(data.begin());
		}
	}
}