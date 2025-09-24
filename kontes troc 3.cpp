#include <bits/stdc++.h>
using namespace std;

// Fungsi utama untuk menyelesaikan masalah
int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(K);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int j = 0; j < K; ++j) {
        cin >> B[j];
    }

    sort(B.rbegin(), B.rend()); // Urutkan B dari terbesar ke terkecil

    priority_queue<pair<int, int>> pq; // Priority queue untuk menyimpan jumlah bola (max-heap)
    for (int j = 0; j < K; ++j) {
        pq.push({B[j], j});
    }

    int colors_used = 0;
    unordered_set<int> used_colors; // Set untuk menyimpan warna yang sudah digunakan

    for (int i = 0; i < N; ++i) {
        int needed = 8 * A[i]; // Kebutuhan untuk senyawa anorganik
        bool allocated = false;

        // Coba alokasikan untuk senyawa anorganik S8
        while (!pq.empty()) {
            auto [available, color] = pq.top();
            pq.pop();
            if (used_colors.find(color) != used_colors.end()) continue; // Warna sudah digunakan

            if (available >= needed) {
                available -= needed;
                if (available > 0) {
                    pq.push({available, color});
                }
                used_colors.insert(color);
                colors_used++;
                allocated = true;
                break;
            } else {
                pq.push({available, color}); // Masukkan kembali jika tidak cukup
            }
        }

        if (!allocated) {
            // Reset priority queue
            while (!pq.empty()) pq.pop();
            for (int j = 0; j < K; ++j) {
                pq.push({B[j], j});
            }
            used_colors.clear();
            colors_used = 0;

            // Coba alokasikan untuk senyawa organik C2H6
            for (int j = 0; j < K; ++j) {
                for (int l = j + 1; l < K; ++l) {
                    int needed_x = 2 * A[i];
                    int needed_y = 6 * A[i];

                    if (B[j] >= needed_x && B[l] >= needed_y) {
                        B[j] -= needed_x;
                        B[l] -= needed_y;
                        used_colors.insert(j);
                        used_colors.insert(l);
                        colors_used += 2;
                        allocated = true;
                        break;
                    }
                }
                if (allocated) break;
            }
        }

        if (!allocated) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << used_colors.size() << endl;
    return 0;
}
