#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    ll a, b, c;
	cin >> a >> b >> c;
	cout << min(a, b)+min(max(a,b), min(a,b)+1)+(c*2);
}