#include <iostream>
using namespace std;

double ceil (double n){
	int ceil_n = static_cast<int>(n);
	if ( n == ceil_n){
		return ceil_n;
	}else if (n>0){
		return ceil_n +1;
	}else {
		return ceil_n;
	}
}

double floor (double n){
	int floor_n = static_cast<int>(n);
	if ( n>=0 || n == floor_n){
		return floor_n;
	}else{
		return floor_n-1;
	}
}


int main (){
	
	double n;
	cin >> n;
	
	cout << floor(n) << ' ' << ceil(n);
	
	
}