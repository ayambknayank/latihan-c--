#include<iostream>

using namespace std;

int main(){
	long long t, n, target, perhari;
	cin >> t;
	
	for(int i=0; i<t; i++){
		long long push_up = 0;
		cin >> n >> target;
		
		for(int j=0; j<n; j++){
			cin >> perhari;
			if(perhari < target){
				push_up += target - perhari;
				target += (target - perhari);
			}
		}
		cout << "Kasus #" << i+1 << ": " << push_up << endl;
	}
}