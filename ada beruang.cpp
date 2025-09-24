#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int n, d;
	cin >> n >> d;
	vector<int> awal(n);
	unordered_map<int, int> ubah;
	for(int i=0; i<n; i++){
		cin >> awal[i];
		ubah[awal[i]+d]++;
	}
	int nunduk = 0;
	for(int i=0; i<n; i++){
		if(ubah[awal[i]]>0){
			nunduk++;
		}
	}
	cout << nunduk << endl;
}