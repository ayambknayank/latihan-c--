#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> jalan[100001];
int jarak[100001];

// Fungsi dfs untuk mencari jalan terpanjang
void dfs(int now){
    for(int i=0; i<jalan[now].size(); i++){
        int akhir = jalan[now][i].first; // jarak akhirnya
        int waktu = jalan[now][i].second; //waktunya
        if(jarak[now]+waktu > jarak[akhir]){
        	jarak[akhir] = jarak[now]+waktu;
        	dfs(akhir);
		}
    }
}

int main(){
    int n, m;
    cin >> n >> m; 
    memset(jarak, -1, sizeof(jarak)); 
    for(int i=0; i<m; i++){
        int a, b, t;
        cin >> a >> b >> t;
        jalan[a].push_back({b, t});
    }
    jarak[1] = 0; 
    dfs(1);
    cout << jarak[n] << endl;
}