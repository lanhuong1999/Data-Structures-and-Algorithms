#include <bits/stdc++.h>
#define maxn 105
using namespace std;
int n, a[maxn],b[maxn];
int f1[maxn],f2[maxn];

void solve(){
    memset(f1,0,sizeof(f1));
    memset(f2,0,sizeof(f2));
    f1[1]=a[1], f2[1]=b[1];
    int m1=0,m2=0;
    for(int i=1;i<=n;i++){
        m1=m2=0;
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) m1=max(m1,f1[j]);
            if(b[i]>b[j]) m2=max(m2,f2[j]);
        }
        f1[i]=m1+a[i];
        f2[i]=m2+b[i];
    }
    int res=INT_MIN;
    int m=n;
    for(int i=1;i<=n;i++){
        res=max(res,f1[i]+f2[m]-a[i]);
        m--;
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        int m=n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[m]=a[i];
            m--;
        }
        solve();
    }
    return 0;
}
