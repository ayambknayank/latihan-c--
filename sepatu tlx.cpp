#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
    int n, m;
    cin >> n >> m;
    int kaki[n];
    for(int i=0; i<n; i++){
        cin >> kaki[i];
    }
    int ukuran[1001]={0};
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        ukuran[x]++;
    }
    int ans = 0;
    sort(kaki, kaki+n);
    for(int i=0; i<n; i++){
        if(ukuran[kaki[i]]>0){
            ans++;
            ukuran[kaki[i]]--;
        }else if(ukuran[kaki[i]+1] > 0){
            ans++;
            ukuran[kaki[i]+1]--;
        }
    }
    cout << ans;
}