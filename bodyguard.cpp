#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int n;
	cin >> n;
	vector<int> bg(n);
	for(int i=0; i<n; i++){
		cin >> bg[i];
	}
	sort(bg.begin(), bg.end());
	int mini = 100, hasil=1;
	for(int i=0; i<n-1; i++){
		mini = min(mini, abs(bg[i+1]-bg[i]));
	}
	for(int i=2; i<=mini; i++){
		hasil*=i;
	}
	cout << hasil;
	return 0;
}