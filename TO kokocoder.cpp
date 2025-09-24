#include <iostream>
#include <vector>
using namespace std;

void ubahFormat(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
    	while(arr[i]>arr[i+2]){
    		int temp = arr[i];
        	arr[i] = arr[i + 2];
        	arr[i + 2] = temp;
        	i+=2;
        	if(i>n-2){
        		i=0;
			}
			if(arr[i]<arr[i+2]){
				i=0;
				break;
			}
		}
    }
}

bool terkecil(const vector<int>& arr){
	int n = arr.size();
	for(int i=0; i<n; i++){
		if(arr[i]>arr[i+1]){
			return false;
		}
	}
	return true;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> urutan(n);
    for (int i=0; i<n; i++){
    	cin >> urutan[i];
	}
	
	ubahFormat(urutan);
	
	if(terkecil(urutan)){
		cout << "Yes";
	}else{
		cout << "No";
	}

    return 0;
}