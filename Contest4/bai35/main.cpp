#include <bits/stdc++.h>
#define maxn 105
using namespace std;
int n,a[maxn];
int  maxSum(int l, int m, int r){
    int sum=0,lsum=INT_MIN,rsum=INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=a[i];
        if(sum>lsum) lsum=sum;
    }
    sum=0;
    for(int i=m+1;i<=r;i++){
        sum+=a[i];
        if(sum>rsum) rsum=sum;
    }
    return lsum+rsum;
}
int solve(int l, int r){
    if(l==r) return a[l];
    int m=(l+r)/2;
    return max(max(solve(l,m),solve(m+1,r)),maxSum(l,m,r));
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(0,n-1)<<endl;
    }
    return 0;
}
