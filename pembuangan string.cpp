#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    size_t pos = S.find(T); // mencari posisi substring T di dalam S

    while (pos != string::npos) { // selama T masih ditemukan di dalam S
        S.erase(pos, T.length()); // hapus kemunculan substring T
        pos = S.find(T); // cari lagi posisi substring T di dalam S
    }

    cout << S << endl; // cetak hasil

    return 0;
}
