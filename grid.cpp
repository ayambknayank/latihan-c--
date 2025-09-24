#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menentukan apakah posisi (r, c) berada di dalam grid
bool isInGrid(int r, int c, int N, int M) {
    return (r >= 1 && r <= N && c >= 1 && c <= M);
}

// Fungsi untuk menghitung jumlah pemutaran minimum yang diperlukan
int minRotations(vector<vector<char>>& grid, int N, int M) {
    // Matriks untuk menyimpan jumlah pemutaran minimum yang diperlukan
    vector<vector<int>> rotations(N + 1, vector<int>(M + 1, -1));

    // Inisialisasi posisi akhir dengan nilai 0
    rotations[N][M] = 0;

    // Queue untuk melakukan BFS
    vector<pair<int, int>> queue;
    queue.push_back({N, M});

    // Array untuk perubahan posisi
    int dr[] = {-1, 0, 1, 0}; // Up, Right, Down, Left
    int dc[] = {0, 1, 0, -1};

    // Melakukan BFS
    while (!queue.empty()) {
        auto [r, c] = queue.back();
        queue.pop_back();

        // Iterasi melalui keempat arah
        for (int d = 0; d < 4; ++d) {
            int nr = r + dr[d];
            int nc = c + dc[d];

            // Jika posisi (nr, nc) masih di dalam grid dan belum dikunjungi
            if (isInGrid(nr, nc, N, M) && rotations[nr][nc] == -1) {
                // Menghitung jumlah pemutaran yang diperlukan untuk posisi (nr, nc)
                char direction = grid[nr][nc];
                int required_rotations = rotations[r][c];
                if ((d == 0 && direction != 'S') ||
                    (d == 1 && direction != 'W') ||
                    (d == 2 && direction != 'N') ||
                    (d == 3 && direction != 'E')) {
                    required_rotations++;
                }

                // Menyimpan jumlah pemutaran minimum yang diperlukan untuk posisi (nr, nc)
                rotations[nr][nc] = required_rotations;

                // Jika posisi (nr, nc) bukan petak kejutan, tambahkan ke queue
                if (direction != 'X') {
                    queue.push_back({nr, nc});
                }
            }
        }
    }

    // Mengembalikan jumlah pemutaran minimum untuk mencapai petak kejutan
    return rotations[1][1];
}

int main() {
    int N, M;
    cin >> N >> M;

    // Membaca grid
    vector<vector<char>> grid(N + 1, vector<char>(M + 1));
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cin >> grid[i][j];
        }
    }

    // Menghitung dan mencetak hasil
    int result = minRotations(grid, N, M);
    if (result == -1) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
