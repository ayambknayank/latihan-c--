#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	cout << "KALKULATOR KU" << endl;
	bool cek = true;
	int a;
	cin >> a;
	char operasi;
	cin >> operasi;
	int b;
	cin >> b;
	int total=0;
	
	switch(operasi){
		case 'x':
			total+=(a*b);
			break;
		case '/':
			total+=(a/b);
			break;
		case '+':
			total+=(a+b);
			break;
		case '-':
			total+=(a-b);
			break;
		case '%':
			total+=(a%b);
			break;
		default:
			cout << "ERROR";
			cek = false;
			break;
	}
	cout << total << " ";
	while(cek){
		cin >> operasi;
		cin >> b;
		switch(operasi){
			case '*':
				total*=b;
				break;
			case '/':
				total/=b;
				break;
			case '+':
				total+=b;
				break;
			case '-':
				total-=b;
				break;
			case '%':
				total%=b;
				break;
			default:
				cout << "ERROR" << endl;
				return 0;
		}
		cout << total << " ";
	}
}