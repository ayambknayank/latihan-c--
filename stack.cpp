#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int x, y;
	string perintah;
	stack<int> urutan;
	int sum=0;
	
	for(int i=0; i<n; i++){
		cin >> perintah;
		if(perintah == "add"){
			cin >> x >> y;
			for(int j=0; j<y; j++){
				urutan.push(x-sum);	
			}
			cout << urutan.size() << endl;
		}else if(perintah == "del"){
			cout << urutan.top()+sum << endl;
			cin >> y;
			for(int j=0; j<y; j++){
				urutan.pop();
			}
		}else if(perintah == "adx"){
			cin >> x;
			sum+=x;
		}else if(perintah == "dex"){
			cin >> x;
			sum-=x;
		}
	}
	return 0;
}