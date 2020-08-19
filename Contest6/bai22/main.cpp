#include <bits/stdc++.h>

using namespace std;
int search_Binary(int *a, int n, int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>x) r=m-1;
        else if(a[m]<x) l=m+1;
        else return 1;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,x,*a;
        cin>>n>>x;
        a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<search_Binary(a,n,x)<<endl;
        delete a;
    }
    return 0;
}
