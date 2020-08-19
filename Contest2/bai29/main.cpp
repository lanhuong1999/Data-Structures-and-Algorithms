#include <bits/stdc++.h>
#define maxn 105
using namespace std;
int solve(int k,int n){
    if(k==n||k==0) return 1;
    if(k==1) return n;
    return solve(k-1,n-1)+solve(k,n-1);
}
int main()
{
    int t; cin>>t;
    while(t--){
        int m,n;
        int a[maxn][maxn];
        cin>>m>>n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) cin>>a[i][j];
        cout<<solve(n-1,m+n-2)<<endl;
    }
    return 0;
}
