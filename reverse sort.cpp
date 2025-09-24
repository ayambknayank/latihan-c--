#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--){
		int n;cin >> n;
		string s;
		cin >> s;
		vector<int> idx;
		int k=0;
		string benar = s;
		sort(benar.begin(), benar.end());
		if(benar==s){
			cout << "0" << endl;
			continue;
		}
		cout << "1" << endl;
		for(int i=0; i<n; i++){
			if(s[i]!=benar[i]){
				idx.push_back(i+1);
				k++;
			}
		}
		cout << k << " ";
		for(int i=0; i<k; i++){
			cout << idx[i] << " ";
		}
		cout << endl;
	}
}