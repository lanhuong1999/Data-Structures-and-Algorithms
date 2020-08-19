#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int search_binary(int a[], int n, int k){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==k) return 1;
        else if(a[m]>k) r=m-1;
        else l=m+1;
    }
    return 0;
}
void solve(int a[], int n){
    sort(a,a+n);
    int res=0;
    for(int i=a[0]+1;i<=a[n-1]-1;i++)
        if(!search_binary(a,n,i)) res++;
    cout<<res<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n,a[maxn];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        solve(a,n);
    }
    return 0;
}
