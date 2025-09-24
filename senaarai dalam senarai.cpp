#include<bits/stdc++.h>
using namespace std;

int n, x, dalam;
string senarai, baru;
vector<string> simpan;

int main(){
	cin >> n;
	while(n--){
		dalam=0;
		cin >> x >> senarai;
		for(auto &a:senarai){
			if(a=='['){
				dalam++;
			}else if(a==']'){
				dalam--;
			}
			if(x<=dalam){
				baru+=a;
			}else{
				if(baru!=""){
					simpan.push_back(baru+']');
				}
				baru="";
			}
		}
		cout << simpan.size() << endl;
		for(auto baru:simpan){
			cout << baru << endl;
		}
		simpan.clear();
	}
	return 0;
}