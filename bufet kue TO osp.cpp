#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Cake {
    int value;
    int weight;
    int stock;
};

int main() {
    int S, N;
    cin >> S >> N;

    vector<Cake> cakes(N);
    for (int i = 0; i < N; ++i) {
        cin >> cakes[i].value >> cakes[i].weight >> cakes[i].stock;
    }

    // Matriks untuk menyimpan nilai maksimum yang dapat diperoleh dari setiap kapasitas dan jumlah kue
    vector<vector<int>> dp(N + 1, vector<int>(S + 1, 0));

    // Melakukan dynamic programming untuk mencari nilai maksimum
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= S; ++j) {
            // Jika berat kue ke-i lebih besar dari kapasitas piring
            if (cakes[i - 1].weight > j) {
                // Nilai maksimum tetap sama dengan nilai maksimum sebelumnya
                dp[i][j] = dp[i - 1][j];
            } else {
                // Jika kapasitas cukup untuk mengambil kue ke-i
                // Mencari nilai maksimum antara mengambil kue ke-i atau tidak
                dp[i][j] = max(dp[i - 1][j], dp[i][j - cakes[i - 1].weight] + cakes[i - 1].value);
                // Mengecek apakah masih tersedia stok kue ke-i untuk diambil
                dp[i][j] = min(dp[i][j], cakes[i - 1].stock * cakes[i - 1].value);
            }
        }
    }

    // Outputkan nilai maksimum yang dapat diperoleh
    cout << dp[N][S] << endl;

    return 0;
}
