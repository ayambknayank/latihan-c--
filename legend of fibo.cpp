#include<bits/stdc++.h>
using namespace std;

int fibonacci(int x){
	if(x==0||x==1){
		return x;
	}else{
		return (fibonacci(x-2)+fibonacci(x-1));
	}
}

int main(){
	int t;
	cin >> t;
	int n, m;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		
		//int hasil = fibonacci(n, m);
		long long f1=1, f2=0, fn;
		for(long long j=1; j<=n; j++){
			fn=f1+f2;
			f1=f2;
			f2=fn;
			
			fn%=m;
			f1%=m;
			f2%=m;
		}
		cout << "Case #" << i+1 << ": " << fn << endl;
	}
}