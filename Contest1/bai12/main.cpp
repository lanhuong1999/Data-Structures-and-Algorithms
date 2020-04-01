#include <bits/stdc++.h>
#define maxn 100
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int a[maxn],b[maxn];
        int n,m,p;
        cin>>n>>m>>p;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        for(int i=n-1;i>=p;i--) a[i+m]=a[i];
        for(int i=p;i<m+p;i++) a[i]=b[i-p];

        for(int i=0;i<m+n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
