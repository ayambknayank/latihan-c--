#include <bits/stdc++.h>
using namespace std;

long long n;
long long memo[100001][5];

int arr[] = {50,25,10,5,1};

long long dp(long long x, int c) {
	if (x == 0) return 1;
	if (c == 5) return 0;
	if (memo[x][c] != -1) return memo[x][c];
	long long ans = 0;
	if (x >= arr[c]) ans += dp(x-arr[c], c);
	if (c < 5) ans += dp(x, c+1);
	return memo[x][c] = ans;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	memset(memo, -1, sizeof memo);
	while (cin >> n) {
		long long count = dp(n, 0);
		if (count == 1) {
			cout << "There is only 1 way to produce " << n << " cents change." << endl;
		}
		else {
			cout << "There are " << count << " ways to produce " << n << " cents change." << endl;
		}
	}
}