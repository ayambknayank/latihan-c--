#include <bits/stdc++.h>
using namespace std;

int n, a[30];
string s;

int main() {
    cin >> n >> s;
    for(int i=0; i<n; i++){
    	a[s[i]-'A']++;
	}
	
	sort(a, a+26, greater<int>());
	
	int x = a[0];
	int y = a[1];
	int z = a[2];
	
	if(z==0) cout << "-1" << endl;
	else{
		int ans = a[2]*3;
		x-=z;
		y-=z;
		if(x>=1) ans++;
		if(y>=1) ans++;
		cout << ans << endl;
	}

    return 0;
}
