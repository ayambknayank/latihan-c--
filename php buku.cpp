#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int finddivisiblesubsequence(int a[], int n){
	int sum[n+1];
	sum[0]=0;
	for(int i=1; i<=n; i++){
		sum[i] = sum[i-1]+a[i-1];
	}
	
	int seeninindex[n];
	memset(seeninindex, -1, sizeof seeninindex);
	
	int length = 0;
	for(int i=0; i<=n; i++){
		if(seeninindex[sum[i]%n]==-1){
			seeninindex[sum[i]%n]=i;
		}else{
			int start = seeninindex[sum[i] % n];
            int end = i - 1;
            length = end - start + 1;
            break;
		}
	}
	return length;
}

int main(){
	int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << finddivisiblesubsequence(a, n) << endl;
    return 0;
}