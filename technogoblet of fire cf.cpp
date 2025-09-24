#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
	bismillah
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> power(n), sekolah(n);
    map<int, int> makspower;

    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> sekolah[i];
        makspower[sekolah[i]] = max(makspower[sekolah[i]], power[i]);
    }

    vector<int> pilih(k);
    for (int i = 0; i < k; i++) {
        cin >> pilih[i];
    }

    int sekolahpilihan = 0;
    for (int i = 0; i < k; i++) {
        int s = sekolah[pilih[i] - 1];
        if (power[pilih[i] - 1] < makspower[s]) {
            sekolahpilihan++;
        }
    }

    cout << sekolahpilihan << endl;

    return 0;
}
