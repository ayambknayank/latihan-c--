#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

using namespace std;

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end(), greater<int>());
        sort(a.begin(), a.end());
        long long total = 0;
        if(k==0){
        	for (int i = 0; i < n; i++) {
	            total += a[i];
	        }
	        cout << total << endl;
	        continue;
		}
        bool stop=false;
        for (int i = 0; i < n; i++) {
        	for(int j=0; j<n; j++){
        		if(a[i]<b[j]){
        			// tukar posisi
		            int ac = a[i];
		            int bc = b[j];
		            a[i] = bc;
		            b[j] = ac;
		            k--;
		            if(k==0){
		            	stop=true;
					}
				}
			}
			if(stop){
				break;
			}
        }
        for (int i = 0; i < n; i++) {
            total += a[i];
        }
        cout << total << endl;
    }
    return 0;
}
