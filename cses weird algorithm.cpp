#include<iostream>
#include <deque>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	deque<long long> hasil;
	if(n==1){
		cout << '1';
		return 0;
	}
	while (n>1){
		hasil.push_back(n);
		if(n%2==0){
			n= n/2;
		}else{
			n=n*3+1;
		}
		if(n==1){
			hasil.push_back(n);
			break;
		}
	}
	
	for (long long num : hasil) {
        cout << num << " ";
    }
	return 0;	
}