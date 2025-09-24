#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int x1, y1, x, y;
	vector<bool> data(176, true);
	for(int i=0; i<4; i++){
		cin >> x >> y;
		if(i==2){
			x1 = x;
			y1 = y;
			continue;
		}
		for(int j=x; j<y; j++){
			data[j]=false;
		}
	}
	int ans=0;
	for(int i=x1; i<y1; i++){
		if(data[i]==true){
			ans++;
		}
	}
	if(ans==0){
		cout << "No guitar solo :(";
	}else{
		cout << "Guitar solo (" << ans << " sec.)";
	}

}