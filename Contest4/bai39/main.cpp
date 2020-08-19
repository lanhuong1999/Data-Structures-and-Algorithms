#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll *a,*b;
int n;
int solve(int l, int r){
    int m=(l+r)/2;
    if(m==n-1) return n-1;
    if(m==0&&a[m]!=b[m]) return 0;
    if(a[m]!=b[m]&&a[m]!=b[m-1]) return m;
    if(a[m]==b[m]){
        int c=solve(m+1,r);
        return c;
    }
    else{
        int c=solve(l,m-1);
        return c;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        a=new ll[n]; b=new ll[n-1];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) cin>>b[i];
        cout<<solve(0,n-1)+1<<endl;
        delete a,b;
    }
    return 0;
}
