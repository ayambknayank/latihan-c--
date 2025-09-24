#include <bits/stdc++.h>

using namespace std;

long long t,a,b,l,r,k,w;

long long cts(long long x) {
	return x-l;
}

int main() {
	cin >> t;
	int cs = 1;
	while (t--) {
		cin >> a >> b >> l >> r;
		cin >> k;
		vector<long long> vec;
		for (int i=0;i<k;i++) {
			cin >> w;
			vec.push_back(w);
		}
		// proses
		// value
		vector<long long> cost (r-l+1, -1);
		// menanyakan cost X
		// daripada cost[X]
		// mending cost[X-l], ngatasin RTE
		// bfs unweighted s.p.
		// berarti pake queue
		
		queue <long long> q;
		q.push(a);
		cost[cts(a)] = 0;
		while (!q.empty()) {
			long long cur = q.front();
			q.pop(); // hapus
			// cur == current
			if (cur == b) {
				break; // sudah ketemu
			}
			for (auto a : vec) {
				// maksudnya adalah
				// kita memproses semua angka
				// didalam vec
				// yg dimana angka trsbut == a
				// ada 4 langkah
				// +,-,*,/, bagi harus mod == 0
				
				// tambah
				long long tambah = cur + a;
				if (tambah >= l && tambah <= r) {
					// di dalam jangkauan
					if (cost[cts(tambah)] == -1) {
						// belum divis, harus di proses
						q.push(tambah);
						cost[cts(tambah)] = cost[cts(cur)] + 1;
					}
				}
				
				// kurang
				long long kurang = cur - a;
				if (kurang >= l && kurang <= r) {
					// di dalam jangkauan
					if (cost[cts(kurang)] == -1) {
						// belum divis, harus di proses
						q.push(kurang);
						cost[cts(kurang)] = cost[cts(cur)] + 1;
					}
				}
				
				// kali
				long long kali = cur * a;
				if (kali >= l && kali <= r) {
					// di dalam jangkauan
					if (cost[cts(kali)] == -1) {
						// belum divis, harus di proses
						q.push(kali);
						cost[cts(kali)] = cost[cts(cur)] + 1;
					}
				}
				
				// bagi
				// syarat mod 0
				if (cur % a == 0) {
					// memenuhi syarat
					long long bagi = cur / a;
					if (bagi >= l && bagi <= r) {
					// di dalam jangkauan
					if (cost[cts(bagi)] == -1) {
						// belum divis, harus di proses
						q.push(bagi);
						cost[cts(bagi)] = cost[cts(cur)] + 1;
					}
				}
				}
			}
		}
		cout << "Kasus #" << cs << ": " << cost[cts(b)] << endl;
		cs++;
	}
}