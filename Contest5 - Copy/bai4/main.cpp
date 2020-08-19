#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int f[maxn][maxn];
int n,k,a[maxn];
void solve(){
    f[1][a[1]]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=k;j++)
            f[i][j]=f[i-1][j];
        f[i][a[i]]=max(f[i][a[i]],1);
        for(int j=0;j<=k;j++){
            if(f[i-1][j]){
                int x=(j+a[i])%k;
                f[i][x]=max(f[i][x],f[i-1][j]+1);
            }
        }
    }
    cout<<f[n][0]<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i], a[i]%=k;
        solve();
    }
    return 0;
}
