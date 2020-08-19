#include <bits/stdc++.h>
const long long mod= 1e9+7;

using namespace std;
int n,k;
int a[1005],f[1005];
int solve(){
    memset(f,0,sizeof(f));
    f[0]=1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(a[j]<=i){
                f[i]=(f[i]+f[i-a[j]])%mod;
            }
        }
    }
    return f[k];
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<solve()<<endl;
    }
    return 0;
}
