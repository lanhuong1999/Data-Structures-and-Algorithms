#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int main()
{
    int n, a[maxn];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int res=0,f[maxn];
    for(int i=0;i<n;i++){
        f[i]=1;
        for(int j=0;j<i;j++)
            if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
        res=max(res,f[i]);
    }
    cout<<res<<endl;
    return 0;
}
