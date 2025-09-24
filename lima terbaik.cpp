#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n); 
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        sort(a.begin(), a.end(), greater<int>()); 
        int hasil = 0;
        for (int j = 0; j < min(n, 5); j++) { 
        }

        cout << hasil << endl;
    }

    return 0;
}
