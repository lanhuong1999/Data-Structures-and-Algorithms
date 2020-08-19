#include <bits/stdc++.h>

using namespace std;
int solve(int a[], int n){
    int l=0,r=n-1;
    int m=0;
    while(true){
        m=(l+r)/2;
        if(l==r-1) break;
        if((a[l]-l)!=(a[m]-m)) r=m;
        else if((a[r]-r)!=(a[m]-m)) l=m;

    }
    return a[m]+1;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n,*a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n-1;i++) cin>>a[i];
        cout<<solve(a,n-1)<<endl;
        delete a;
    }
    return 0;
}
