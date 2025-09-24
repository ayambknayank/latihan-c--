#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--){
    	string a, b;
    	cin >> a >> b;
    	bool cek=false;
    	if(a==b){
    		cout << "YES" << endl;
    		continue;
		}
		for(int i=0; i<a.size(); ++i){
			if(a[i]==b[i]){
				if(a[i]=='0' && b[i+1]=='1'){
					if(a[i+1]=='1'){
						cek = true;
						break;
					}
				}
			}
		}
		if(cek){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}