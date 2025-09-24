#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;

long long N, M, K, A[MAXN], L[MAXN], R[MAXN], D[MAXN], X, Y, B[MAXN], C[MAXN];

int main() {
    cin>>N>>M>>K;
    for (int i=1;i<=N;i++) {
        cin>>A[i];
    }
    for (int i=1;i<=M;i++) {
        cin>>L[i]>>R[i]>>D[i];
    }
    for (int i=1;i<=K;i++) {
        cin>>X>>Y;
        C[X]++;
        C[Y+1]--;
    }
    for (int i=1;i<=M;i++) {
        C[i]+=C[i-1];
        B[L[i]]+=D[i]*C[i];
        B[R[i]+1]-=D[i]*C[i];
    }
    for (int i=1;i<=N;i++) {
        B[i]+=B[i-1];
        A[i]+=B[i];
        cout<<A[i]<<" ";
    }
}