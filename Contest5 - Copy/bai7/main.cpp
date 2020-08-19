#include <bits/stdc++.h>
#define maxn 100005
const long long mod=1e9+7;
using namespace std;
long long f[maxn];
int main()
{
    int t;cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        int n,k;
        cin>>n>>k;
        f[0]=1;
        for(int i=1;i<=min(n,k);i++){
            for(int j=i-1;j>=0;j--)
                f[i]=(f[i]+f[j])%mod;
        }
        for(int i=k+1;i<=n;i++)
            f[i]=(f[i-1]*2LL-f[i-k-1]+mod)%mod;
        cout<<f[n]<<endl;
    }
    return 0;
}
