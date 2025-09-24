#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	vector<int> angka(1001, 0);
	int a;
	for(int i=0; i<n; i++){
		cin >> a;
		angka[a]++;
	}
	sort(angka.begin(), angka.end());
	int ans=0;
	int cnt=0;
	//vector<bool> cek(n, false);
	for(int i=1; i<=1000; ++i){
		ans += min(angka[cnt], angka[i]);
		cnt = i;
	}
	cout << ans;
}