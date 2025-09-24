#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Mencari maksimum dari kesulitan dalam kumpulan berurutan sebanyak k
    int total_profit = 0;
    vector<int> days;
    for (int i = 0; i < k; i++) {
        int max_difficulty = -1;
        int max_index = -1;
        for (int j = 0; j < n; j++) {
            if (j < k * (i + 1) && a[j] > max_difficulty) {
                max_difficulty = a[j];
                max_index = j;
            }
        }
        days.push_back(max_index + 1); // Menambahkan jumlah masalah yang akan diselesaikan pada hari ke-i
        total_profit += max_difficulty; // Menambahkan keuntungan maksimum dari hari ke-i
    }

    cout << total_profit << endl;
    for (int i = 0; i < k; i++) {
        cout << days[i] << " ";
    }
    cout << endl;

    return 0;
}
