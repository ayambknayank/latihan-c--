#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int maks = 1e9;

void solve() {
    int n;
    cin >> n;
    char trump;
    cin >> trump;
    int ans = 0;
    vector<pair<int, char>> menang;
	vector<pair<char, int>> kalah;

    for (int i = 0; i < 2 * n; i++) {
        int angka;
        char bentuk;
        cin >> angka >> bentuk;
        if (bentuk == trump) {
            menang.push_back({angka, bentuk});
            ans++;
        } else {
            kalah.push_back({bentuk, angka});
        }
    }
	sort(kalah.begin(), kalah.end());
	vector<int> j;
	for(int i=0; i<kalah.size(); i++){
		if(kalah[i].first==kalah[i+1].first && i+1<kalah.size()){
			ans++;
			j.push_back(i);
			i++;
		}
	}

    if (ans < n) {
        cout << "IMPOSSIBLE" << endl;
    }else {
        sort(menang.begin(), menang.end());
        //keluarkan kemungkinan pasangan kartu yang kalah
        for(int i=0; i<j.size(); i++){
        	cout << kalah[j[i]].second << kalah[j[i]].first << " " << kalah[j[i]+1].second << kalah[j[i]+1].first << endl;
        	kalah[j[i]].second = 0; // di nol kan agar tiak di cek lagi
        	kalah[j[i]+1].second = 0;
		}
		//keluarkan sisanya
		int p = 0;
        for (int i = 0; i < kalah.size(); i++) {
        	if(kalah[i].second!=0){
        		cout << kalah[i].second << kalah[i].first << " " << menang[p].first << menang[p].second << endl;
            	p++;
			}
        }
        for (int i = p; i < menang.size(); i+=2) {
            cout << menang[i].first << menang[i].second << " " << menang[i + 1].first << menang[i + 1].second << endl;
        }
    }
}

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
