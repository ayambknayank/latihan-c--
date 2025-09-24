#include <bits/stdc++.h>
using namespace std;

int n, m, a[1001][1001];
int h[] = {0, 1, 0, -1};
int v[] = {-1, 0, 1, 0};

void floodFill(int r, int c) {
	a[r][c] = 0;
	for (int i = 0; i < 4; i++) {
		int r2 = r + v[i], c2 = c + h[i];
		if (r2 > 0 && c2 > 0 && r2 <= n && c2 <= m) {
			if (a[r2][c2] == 1) {
				floodFill(r2, c2);
			}
		}
	}
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int danau = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 1) {
				danau++;
				floodFill(i, j);
			}
		}
	}
	printf("%d", danau);
}