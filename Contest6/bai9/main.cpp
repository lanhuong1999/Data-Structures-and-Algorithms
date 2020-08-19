#include <bits/stdc++.h>
#define maxn 105
using namespace std;
void solve(int a[], int n, int k){
    int res=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>k) break;
        for(int j=i+1;j<n;j++)
            if(a[j]+a[i]==k) res++;
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k, a[maxn];
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        solve(a,n,k);
    }
    return 0;
}
