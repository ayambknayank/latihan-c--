#include <iostream>
using namespace std;

int main(){
	int k, a;
	char c;
	
	cin >> k >> c >> a;
	
	int m=0;
	for(int i=1; i<=k; i++){
		
		for (int p=1; p<=k; p++){
			
			
			if(p==1+m || p==k-m && i==1){
				cout << a;
				continue;
			}else if(p==k-m || p==m+1 && i==k){
				cout << a;
				continue;
			}
			cout << c;
		}
		cout << endl;
		m++;
	}
	
	return 0;
}