#include <iostream>
using namespace std;

long long countOddNumbers(long long n) {
    // Counts the number of odd integers from 1 to n
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return (n + 1) / 2;
    }
}

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = countOddNumbers(n);
    
    if (k <= oddCount) {
        // k-th position is an odd number
        cout << 2 * k - 1 << endl;
    } else {
        // k-th position is an even number
        cout << 2 * (k - oddCount) << endl;
    }

    return 0;
}
