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
    	ll jml=0;
    	for(int i=0; i<n; i++){
    		int darah;
			cin >> darah;
			jml+=darah;
		}
		int maks=0;
		for(int i=0; i<n; i++){
			int spell;
			cin >> spell;
			jml+=spell;
			maks = max(maks, spell);
		}
		cout << jml-maks << endl;
	}
}