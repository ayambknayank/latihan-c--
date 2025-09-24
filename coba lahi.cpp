#include <iostream>
using namespace std;
#define int long long

const int modu = 1e9 + 7;

int pangkat(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % modu;
        }
        base = (base * base) % modu;
        exponent >>= 1;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        int bc = pangkat(b, c);
        int result = pangkat(a, bc);
        
        cout << result << "\n";
    }

    return 0;
}
