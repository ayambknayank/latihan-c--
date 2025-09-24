#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int x, y;
	string perintah;
	deque<int> urutan;
	
	for(int i=0; i<n; i++){
		cin >> perintah;
		
		if(perintah == "add"){
			cin >> x >> y;
			for(int j=0; j<y; j++){
				urutan.push_back(x);	
			}
			cout << urutan.size();
		}else if(perintah == "del"){
			cout << urutan.front();
			cin >> y;
			for(int j=0; j<y; j++){
				urutan.pop_front();
			}
		}else if(perintah == "rev"){
			reverse(urutan.begin(), urutan.end());
		}
	}
	return 0;
}