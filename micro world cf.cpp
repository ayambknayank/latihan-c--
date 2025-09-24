#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
 
int main(){
	int n, k;
	cin >> n >> k;
	vector<int>a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	while(true){
		bool cek = true;
		int i=0;
		while(i<a.size()-1){
			if(i+1<a.size()-1 && a[i+1]>a[i] && a[i+1]-a[i]<=k){
				cek = false;
				a.erase(a.begin()+i); // kemungkinan salah
				 //jika menghilangkan i maka idx vector akan bergeser sehingga kita harus mengurangkan lagi i nya
			}else{
				i++;
			}
		}
		if(cek){
			break;
		}
	}
	cout << a.size();
}