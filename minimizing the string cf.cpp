#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
	bismillah
	int n;
	cin >> n;
	string s;
	cin >> s;
	int nomor = n-1;
	for(int i = 1; i < n; i++){
		if(s[i-1] > s[i]){
			nomor = i-1;
			break;
		}
	}
	s.erase(s.begin()+nomor);
	cout << s;
}