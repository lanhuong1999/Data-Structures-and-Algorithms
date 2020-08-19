#include <bits/stdc++.h>
#define maxn 505
using namespace std;
int f[maxn][maxn],a[maxn][maxn];
int n,m,res;
int main()
{
    int t; cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(f,0,sizeof(f));
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
        for(int i=1;i<=n;i++) f[i][1]= f[i-1][1]+a[i][1];
        for(int i=1;i<=m;i++) f[1][i]= f[1][i-1]+a[1][i];
        for(int i=2;i<=n;i++)
            for(int j=2;j<=m;j++){
                f[i][j]=min(f[i-1][j],min(f[i-1][j-1],f[i][j-1]))+a[i][j];
            }

        cout<<f[n][m]<<endl;
    }
    return 0;
}
