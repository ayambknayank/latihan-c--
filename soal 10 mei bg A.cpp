#include <iostream>
using namespace std;
/*
int main (){
	int y,n,k,x;
	cin >> y >> k >> n;
	for (x=1; x<n; x++){
		
		int a = x+y;
			if (a<n){	
				if (a%k==0){
					cout << x << " ";
				}else{
					continue;
				}
				
			}
			
			else{
				cout << "-1";
				break;
			}
		
	}

	//x + y < n;
	//(x + y) % k ==0;
	
}


int main() {
    int y, k, n;
    cin >> y >> k >> n;
    bool found = false;
    for (int x = 0; x < n; x++) {
        if ((x + y) % k == 0) {
        	if ((x + y) < n){
        		cout << x << " ";
           		found = true;
			}else {
				break;
			}
            
        }
    }
    if (!found) {
    	int i = -1;
        cout << i;
    }
    cin.get();
    return 0;
}*/

int main() {
    int y, k, n;
    cin >> y >> k >> n;

    int x = k - (y % k);
    if (x + y > n) {
        cout << "-1" << endl;
        return 0;
    }

    while (x <= n - y) {
        cout << x << " ";
        x += k;
    }

    if (x == k - (y % k)) {
        cout << "-1";
    }

    cout << endl;
    return 0;
}