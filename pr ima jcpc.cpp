#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<int> prm;
int pr[1000000];

void kumpulan() {
    pr[1] = 1;
    int limit = 1e7;

    for (int i = 2; i*i<=limit; i++) {
        for (int j = i+i; j*j <= limit; j += i) {
            pr[j] = 1;
        }
    }

    for (int i = 2; i*i <= limit; i++) {
        if (!pr[i]) {
            prm.push_back(i);
        }
    }
}

void solve() {
    int a;
    cin >> a;
    if (a == 1) {
        cout << 1 << endl;
        return;
    }

    int x = a;
    bool first = true;
    
    for (auto i : prm) {
        if (i * i > x) break;  
        int k = 0;
        while (x % i == 0) {
            k++;
            x /= i;
        }
        if (k > 0) {
            if (!first) cout << " x ";
            first = false;
            cout << i;
            if (k > 1) {
                cout << "^" << k;
            }
        }
    }

    if (x > 1) {
        if (!first) cout << " x ";
        cout << x;
    }
    cout << endl;
}

signed main() {
    bismillah
    int n;
    cin >> n;
    kumpulan();
    while (n--) {
        int a;
	    cin >> a;
	    if (a == 1) {
	        cout << 1;
	    }
	    int x = a;
	    for (auto i : prm) {  
	        int k = 0;
	        while (x % i == 0) {
	            k++;
	            x /= i;
	        }
	        if (k>1) {
	            cout << i << "^" << k;
	        }else if (k == 1) {
                cout << i;
            }
            if(x>1 && k){
            	cout << " x ";
			}
	    }
	    if (x > 1) {
	        cout << x;
	    }
	    cout << endl;
    }
}
