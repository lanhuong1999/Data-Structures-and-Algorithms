#include <bits/stdc++.h>
#define maxn 100000
using namespace std;

int sBinary(int a[], int n, int k){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==k) return m;
        else if(a[m]>k) r=m-1;
        else l=m+1;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int a[maxn],n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        int pos=sBinary(a,n,k);
        if(pos==-1) cout<<"NO";
        else cout<<pos+1;
        cout<<endl;
    }
    return 0;
}
