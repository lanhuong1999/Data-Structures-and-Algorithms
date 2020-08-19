#include <bits/stdc++.h>
#define maxn 10005

using namespace std;
int f[maxn];
int solve(int n){
    memset(f,0,sizeof(f));
    f[1]=1;f[2]=2;
    for(int i=3;i<=n;i++){
        f[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            int t=j*j;
            if(t<=i) f[i]=min(f[i],f[i-t]+1);
        }
    }
    return f[n];
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
