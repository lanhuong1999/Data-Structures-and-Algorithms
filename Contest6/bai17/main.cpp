#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll *a,*b;
        a=new ll[n]; b=new ll[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a,a+n,greater<ll>());
        sort(b,b+m);
        ll res=a[0]*b[0];
        cout<<res<<endl;
        delete a,b;
    }
    return 0;
}
