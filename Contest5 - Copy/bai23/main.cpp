#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int a[maxn],f[maxn];
int main()
{
    int t; cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0;
        for(int i=0;i<n;i++){
            f[i]=1;
            for(int j=0;j<i;j++)
                if(a[i]>=a[j]) f[i]=max(f[i],f[j]+1);
            res=max(res,f[i]);
        }
        cout<<n-res<<endl;
    }
    return 0;
}
