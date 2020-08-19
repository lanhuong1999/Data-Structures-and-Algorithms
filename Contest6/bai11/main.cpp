#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int n){
    int minn=INT_MAX;
    int res=0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(abs(a[j]+a[i])<minn){
                minn=abs(a[j]+a[i]);
                res=a[j]+a[i];
            }
    cout<<res<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int *a;
        a= new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        solve(a,n);
        delete a;
    }
    return 0;
}
