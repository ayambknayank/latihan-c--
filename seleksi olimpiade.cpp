#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int t, n, m;
	string cari;
	
	cin >> t;
	while(t--){
		cin >> n >> m >> cari;
		vector<string> id(n);
        vector<int> sesi1(n, -1), sesi2(n, -1), sesi3(n, -1);
		int ii[3];
		for(int i=0; i<n; i++){
			cin >> id[i];
			if(id[i]==cari){
				cin >> ii[0] >> ii[1] >> ii[2];
				//sesi1[i]=-1;sesi2[i]=-1;sesi3[i]=-1;
				continue;
			}
			cin >> sesi1[i] >> sesi2[i] >> sesi3[i];
		}
		int urut=n;
		for(int i=0; i<n; i++){
			if(sesi3[i]==-1){
				continue;
			}
			
			if(sesi3[i]<ii[2]){
				urut--;
			}else if(sesi3[i]==ii[2]){
				if(sesi2[i]<ii[1]){
					urut--;
				}else if(sesi2[i]==ii[1]){
					if(sesi1[i]<ii[0]){
						urut--;
					}else{
						urut++;
					}
				}
			}
		}
		if(urut>=m){
			cout << "YA" << endl;
		}else{
			cout << "TIDAK" << endl;
		}
	}
}