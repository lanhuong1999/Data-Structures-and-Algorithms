#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int n, a[maxn];
int res,f[maxn];
int main()
{
    int t; cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        res=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            f[i]=a[i];
            for(int j=0;j<i;j++)
                if(a[i]>a[j]) f[i]=max(f[i],f[j]+a[i]);
            res=max(res,f[i]);
        }
        for(int i=1;i<=n;i++) cout<<f[i]<<" ";
        cout<<endl;
        cout<<res<<endl;
    }
    return 0;
}
