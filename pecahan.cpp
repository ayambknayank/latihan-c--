#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

double a, b, c, d;

int main(){
	bismillah
	cin >> a >> b >> c >> d;
	a*=1.00;
	b*=1.00;
	c*=1.00;
	d*=1.00;
	if(a/b > c/d){
		cout << "lebih besar";
	}else if(a/b < c/d){
		cout << "lebih kecil";
	}else{
		cout << "sama";
	}
}