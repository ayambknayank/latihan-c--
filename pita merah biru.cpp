#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n, a, b;

int proses(vec &red, vec &blue){
	sort(red.begin(), red.end(), greater<int>());
	sort(blue.begin(), blue.end());
	int jmlA, jmlB;
	for(int i=1; i<=a; i++){
		jmlA+=red[i];
	}
	for(int i=1; i<=b; i++){
		jmlB+=blue[i];
	}
	return jmlA-jmlB;
}

int main(){
	cin >> n >> a >> b;
	vec l(n+1);
	for(int i=1; i<=n; i++){
		cin >> l[i];
	}vec blue, red;
	int gA = a;
	int gB = a+1;
	int selisih = 0;
	for(int i=1; i<=n-a+b; i++){
		resize(blue, gB+1);
		resize(red, gA+1);
		for(int i=1; i<=gA; i++){
			red.push_back(l[i]);
		}
		for(int i=gB; i<=n; i++){
			blue.push_back(l);
		}
		selisih = max(selisih, proses(red, blue));
		gA++;gB--;
	}
	cout << selisih << endl;
}