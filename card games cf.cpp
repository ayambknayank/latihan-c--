#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int maks = 1e9;

void solve(){
	int n;
	cin >> n;
	char trump;
	cin >> trump;
	int sama=0;
	vector<pair<int, char>> menang;
	vector<pair<char, int>> kalah;
	vector<pair<int, char>> kartu(n*2);
	for(int i=0; i<2*n; i++){
		int angka;
		char bentuk;
		cin >> angka >> bentuk;
		//cin >> kartu[i].first >> kartu[i].second;
		if(bentuk == trump){
			menang.push_back({angka, bentuk});
			sama++;
		}else{
			kalah.push_back({bentuk, angka});
		}
	}
	if (sama < n) {
		sort(kalah.begin(), kalah.end());
		bool cek = true;
		for(int i=0; i<kalah.size(); i++){
			if(kalah[i].first==kalah[i+1].first && i+1<kalah.size()){
				if(kalah[i].second>kalah[i+1].second){
					cout << kalah[i+1].second << kalah[i+1].first << " " << kalah[i].second << kalah[i].first << endl;
				}else{
					cout << kalah[i].second << kalah[i].first << " " << kalah[i+1].second << kalah[i+1].first << endl;
				}
				i++;
			}
		}
		if(cek){
			cout << "IMPOSSIBLE" << endl;
        	return;
		}
    } else if (sama==n) {
        for (int i = 0; i < n; i++) {
            cout << kalah[i].second << kalah[i].first << " " << menang[i].first << menang[i].second << endl;
        }
        return;
    } else {
        sort(menang.begin(), menang.end());
        for (int i = 0; i < kalah.size(); i++) {
            cout << kalah[i].second << kalah[i].first << " " << menang[i].first << menang[i].second << endl;
        }
        for (int i = kalah.size(); i < n * 2; i += 2) {
            cout << menang[i].first << menang[i].second << " " << menang[i + 1].first << menang[i + 1].second << endl;
        }
    }
}

int main(){
	bismillah
	int t;
	cin >> t;
	while(t--){
		solve();
		//cout << endl;
	}
	return 0;
}