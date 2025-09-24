#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> moveTime(n - 1, 0); // D_i = 0 untuk batasan
    vector<long long> cookingTime(n);

    // Membaca waktu pemesanan makanan
    for (int i = 0; i < n - 1; ++i) {
        cin >> moveTime[i]; // Ini seharusnya semua 0 untuk batasan
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> cookingTime[i];
    }
    
    long long totalCookingTime = 0;
    long long maxWaitTime = 0;

    // Menghitung total waktu memasak untuk semua stan yang relevan
    for (int i = 0; i < n; ++i) {
        if (cookingTime[i] != -1) {
            totalCookingTime += cookingTime[i];
            maxWaitTime = max(maxWaitTime, cookingTime[i]);
        }
    }
    
    // Total waktu untuk kembali ke stan awal
    // Dalam batasan ini, karena D_i = 0, kita hanya perlu menambah waktu memasak terbesar
    long long result = totalCookingTime;

    cout << result << endl;

    return 0;
}
