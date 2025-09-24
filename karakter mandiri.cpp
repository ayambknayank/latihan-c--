#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	int n; string s;
	cin >> n >> s;
	sort(s.begin(), s.end());
//	for(int i=1; i<n; i++){
//		if(s[i]==s[i-1]){
//			swap(s[i], s[i+1]);
//			i++;
//		}
//	}
	cout << s << endl;
	for(int i=0; i<n-1; i++){
		if(s[i]==s[i+1]){
			for(int j=i+1; j<n-1; j++){
				if(s[i]!=s[j]){
					swap(s[i], s[j]);
					break;
				}
			}
		}
	}
	cout << s;
}