#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        ll *a,*b;
        a=new ll[n]; b=new ll[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b,b+n,greater<ll>());
        ll res=0;
        for(int i=0;i<n;i++)
            res+=(a[i]*b[i]);
        cout<<res<<endl;

    }
    return 0;
}
