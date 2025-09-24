#include<bits/stdc++.h>
using namespace std;

int n, x, a, level[1001]={0};

int main(){
	cin >> n;
	cin >> x;
	while(x--){
		cin >> a;
		level[a]++;
	}
	cin >> x;
	while(x--){
		cin >> a;
		level[a]++;
	}
	for(int i=1; i<=n; i++){
		if(level[i]==0){
			cout << "Oh, my keyboard!";
			break;
		}else if(level[i]>0 && i==n){
			cout << "I become the guy.";
			break;
		}
	}
}