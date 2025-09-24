#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int n, a;
	cin >> n >> a;
	vector<int>batu(n);
	ll berat=0;
	batu.push_back(a);
	for(int i=1; i<n; i++){
		cin >> a;
		while(a>=batu.back() && !(batu.empty())){
			if(batu.size()==1){
				batu.pop_back();
				berat+=a;
			}else{
				berat+=min(batu[batu.size()-2], a);
				batu.pop_back();
			}
		}
		batu.push_back(a);
	}
	if(batu.size()!=1){
		for(int i=0; i<batu.size()-1; i++)berat+=batu[i];
	}
	cout << berat;
	
}