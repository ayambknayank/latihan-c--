#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Fungsi untuk mengecek apakah suatu titik berada pada sumbu X atau Y
bool isOnAxis(int x, int y,int a,int b) {
    return (x == a || y == b);
}

// Fungsi untuk menghitung jumlah segitiga siku-siku yang memenuhi syarat
long long countRightTriangles(vector<pair<int, int>>& points) {
    unordered_map<int, int> x_count, y_count;
    long long result = 0;

    // Menghitung berapa kali setiap koordinat x dan y muncul
    for (auto& point : points) {
        x_count[point.first]++;
        y_count[point.second]++;
    }

    // Menghitung jumlah segitiga siku-siku yang memenuhi syarat
    for (int i=0; i<n; i++) {
        if (isOnAxis(point[].first, point.second, )) {
            int x_occurrences = x_count[point.first];
            int y_occurrences = y_count[point.second];

            // Menambahkan jumlah segitiga yang mungkin dari titik tersebut
            result += (x_occurrences - 1) * (y_occurrences - 1);
        }
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    // Membaca koordinat titik-titik
    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    // Menghitung dan mencetak hasil
    long long result = countRightTriangles(points);
    cout << result << endl;

    return 0;
}
