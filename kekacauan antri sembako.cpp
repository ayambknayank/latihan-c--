#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	deque<string> data; 
	for(int i=0; i<n; i++){
		int x; 
		string s;
		cin >> x;
		if(x==1){
			cin >> s;
			data.push_front(s);
		}else if(x==2){
			cin >> s;
			data.push_back(s);
		}else if(x==3){
			cout << data[0] << endl;
			data.pop_front();
		}else{
			cout << data[data.size()-1] << endl;
			data.pop_back();
		}
	}
}