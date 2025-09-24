#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Menerima input N, P, dan Q
    int N, P, Q;
    cin >> N >> P >> Q;

    // Menerima input lajur yang beroperasional
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Mengurutkan lajur yang beroperasional
    sort(A.begin(), A.end());

    // Inisialisasi nilai k minimum dengan nilai maksimum yang mungkin
    int k_min = N;

    // Mencari nilai k minimum dengan mencoba semua nilai k dari 1 hingga N
    for (int k = 1; k <= N; ++k) {
        int p_needed = (N + k - 1) / k; // Jumlah alat pendeteksi yang diperlukan
        int q_needed = (p_needed + P - 1) / P; // Jumlah alat pendeteksi kecil yang diperlukan

        // Jika jumlah alat pendeteksi kecil yang diperlukan tidak melebihi Q,
        // maka nilai k tersebut merupakan kandidat k minimum
        if (q_needed <= Q) {
            k_min = k;
            break;
        }
    }

    // Outputkan nilai k minimum
    cout << k_min << endl;

    return 0;
}
