#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> data;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        data.push_back(x);
    }
    //sort(data.begin(), data.endl());
    
    for(int i=0; i<n; i++){
    	int ans=0;
    	for(int j=0; j<n; j++){
    		if(i==j){
    			continue;
			}else{
				ans += data[j];
			}
		}
		cout << ans << endl;
	}
	
}
