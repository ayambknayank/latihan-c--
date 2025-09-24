#include <iostream>
using namespace std;

int main(){
	
	int x, y;
	cin >> x >> y;
	
	if (((x-y)%2==1)){
		cout << "Yes";
	}else if ((x-y==-1)){
		cout << "Yes";
	}else if (x,y==0){
		cout << "Yes";
	}else if ((x%2==0)&&(y%2==1)){
		cout << "Yes";
	}else{
		cout << "No";
	}
}