#include <bits/stdc++.h>
using namespace std;
int n,k,*a;
int search_binary(int l, int r, int x){
    int m=0;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]-x>=k&&a[m-1]-x<k) return m;
        if(a[m]-x<k) l=m+1;
        else r=m-1;
    }
    if(m==r) return n;
    return -1;
}
void solve(){
    long long res=0;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int vt=search_binary(i+1,n-1,a[i]);
        if(vt!=-1) res+=(vt-i-1);
    }
    cout<<res<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        solve();
        delete a;
    }
    return 0;
}
