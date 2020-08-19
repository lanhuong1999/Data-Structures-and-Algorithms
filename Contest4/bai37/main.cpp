#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int sBinary(ll *a, ll x, int l, int r){
    if(a[0]>x) return -1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x) return m;
        else if(x>a[m]){
            if(a[m+1]>x) return m;
            else l=m+1;
        }
        else r=m-1;
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        ll *a; int n;
        ll x;
        cin>>n>>x;
        a=new ll[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int res=sBinary(a,x,0,n-1);
        if(res==-1) cout<<res;
        else cout<<res+1;
        cout<<endl;
        delete a;
    }
    return 0;
}
