#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Menggunakan penyaring Eratosthenes untuk menemukan bilangan prima
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Menghitung jumlah almost prime
    int almostPrimeCount = 0;
    for (int i = 2; i <= n; ++i) {
        int primeDivisors = 0;
        for (int j = 2; j <= i; ++j) {
            if (isPrime[j] && i % j == 0) {
                primeDivisors++;
                if (primeDivisors > 2) {
                    break;
                }
            }
        }
        if (primeDivisors == 2) {
            almostPrimeCount++;
        }
    }

    cout << almostPrimeCount << endl;

    return 0;
}
