#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int x,y,z;  // insert,delete,copy
        cin>>x>>y>>z;
        int f[n+5]={0};
        f[1]=x;
        for(int i=2;i<=n;i++){
            if(i%2) f[i]=min(f[i-1]+x,f[(i+1)/2]+z+y);
            else f[i]=min(f[i-1]+x,f[i/2]+z);
        }
        cout<<f[n]<<endl;
    }
    return 0;
}
