#include <bits/stdc++.h>
#define maxn 505
using namespace std;
int f[maxn][maxn],a[maxn][maxn];
int n,m,res;
int main()
{
    int t; cin>>t;
    while(t--){
        res=0;
        memset(f,0,sizeof(f));
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
        for(int i=1;i<n;i++)
            for(int j=1;j<=m;j++){
                if(a[i][j]){
                    f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+1;
                    res=max(res,f[i][j]);
                }
                else f[i][j]=0;
            }

        cout<<res<<endl;
    }
    return 0;
}
