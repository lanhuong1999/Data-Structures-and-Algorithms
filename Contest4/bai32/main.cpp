#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mergeA(ll *a, int l, int m, int r){

    int n1=m-l+1, n2=r-m;
    ll *L,*R;
    L=new ll[n1]; R=new ll[n2];
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+1+i];

    int i=0,j=0,k=l;
    ll d=0;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i]; i++;
        }
        else{
            a[k]=R[j];
            j++;
            d+=(n1-i);
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i]; k++; i++;
    }
    while(j<n2){
        a[k]=R[j]; k++; j++;
    }
    delete L,R;
    return d;
}
ll mergeSort(ll *a, int l, int r){
    ll d=0;
    if(l<r){
        int m=(l+r)/2;
        d+=mergeSort(a,l,m);
        d+=mergeSort(a,m+1,r);
        d+=mergeA(a,l,m,r);
    }
    return d;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n;  cin>>n;
        ll *a;
        a=new ll[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<mergeSort(a,0,n-1)<<endl;
        delete a;
    }
    return 0;
}
