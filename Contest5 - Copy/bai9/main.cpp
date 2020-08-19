#include <bits/stdc++.h>
#define maxn 105
#define maxk 50005
const long long mod = 1e9+7;
using namespace std;
long long f[maxn][maxk];
int n,k;
long long solve(){
    memset(f,0,sizeof(f));
    for(int i=1;i<=9;i++) f[1][i]=1;

    for(int i=2;i<=n;i++)
        for(int j=0;j<=k;j++)
            for(int m=0;m<=9;m++){
                if(m<=j){
                    f[i][j]=(f[i][j]+f[i-1][j-m])%mod;
                }
            }
    return f[n][k];
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<solve()<<endl;
    }
    return 0;
}
