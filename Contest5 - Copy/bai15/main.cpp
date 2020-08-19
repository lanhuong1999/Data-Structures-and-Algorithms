#include <bits/stdc++.h>
#define maxn 105
using namespace std;
int c[maxn][maxn][maxn];
int m,n,p;
string a,b,d;
void solve(){
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=p;k++)
                if(a[i]==b[j]&&b[j]==d[k])
                    c[i][j][k]=c[i-1][j-1][k-1]+1;
                else
                    c[i][j][k]=max(c[i-1][j][k],max(c[i][j-1][k],c[i][j][k-1]));
    cout<<c[m][n][p]<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(c,0,sizeof(c));
        cin>>m>>n>>p;
        cin>>a>>b>>d;
        a=' '+a; b=' '+b; d=' '+d;
        solve();
    }
    return 0;
}
