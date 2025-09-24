#include<iostream>
#include<string>

using namespace std;

int main(){
	int n; cin >> n;
	
	int x=0, d=0;
	while(n--){
		char a; cin >> a;
		if(a=='A'){
			x++;
		}else if(a=='D'){
			d++;
		}
	}
	if(x>d){
		cout << "Anton" << endl;
	}else if(x<d){
		cout << "Danik" << endl;
	}else{
		cout << "Friendship" << endl;
	}
}