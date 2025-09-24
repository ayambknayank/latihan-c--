#include <bits/stdc++.h>
using namespace std;

int n;
bool flag[1001];
int box[1001];

void permutasi(int pos) {
	if (pos <= n) {
		for (int i = 1; i <= n; i++) {
			if (!flag[i]) {
				box[pos] = i;
				flag[i] = 1;
				permutasi(pos+1);
				flag[i] = 0;
			}
		}
	} else {
		for (int i = 1; i <= n; i++) {
			printf("%d ", box[i]);
		}
		printf("\n");
	}
}

int main() {
	scanf("%d", &n);
	permutasi(1);
}