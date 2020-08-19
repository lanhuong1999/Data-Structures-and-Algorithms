#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a,*f;
        a=new int[n+5], f=new int[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        f[1]=a[1];
        f[2]=max(a[1],a[2]);
        for(int i=3;i<=n;i++){
            f[i]=max(f[i-2]+a[i],f[i-1]);
        }
        cout<<f[n]<<endl;
        delete a,f;
    }

    return 0;
}
