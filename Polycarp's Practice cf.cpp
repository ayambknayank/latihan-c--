#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> angka(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
		angka.push_back(a[i]);
	}
	sort(angka.begin(), angka.end(), greater<int>());
	int profit=0;
	for(int i=0; i<k; i++){
		profit+=angka[i];
	}
	cout << profit << endl;
	for(int i=0; i<k; i++){
		// belum siap
	}
}