#include <iostream>
#include<string>
using namespace std;

int main(){
	
	string robot;
	cin >> robot;
	
	int x=0,y=0;
	
	for(char n : robot){
		if(n=='R'){
			x++;
		}else if(n=='L'){
			x--;
		}else if(n=='U'){
			y++;
		}else if(n=='D'){
			y--;
		}else{
			continue;
		}
	}
	
	cout << x << " " << y;
	
	return 0;
}