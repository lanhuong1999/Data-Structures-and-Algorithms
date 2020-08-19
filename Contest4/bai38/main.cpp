#include <bits/stdc++.h>

using namespace std;
void mergeArr(int *a, int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+1+i];
    i=0; j=0; k=l;
    while(i<n1&&j<n2){
        if(L[i]<R[j]) a[k]=L[i++];
        else a[k]=R[j++];
        k++;
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergeSort(int *a, int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        mergeArr(a,l,m,r);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m,k,*a;
        cin>>m>>n>>k;
        a=new int[m+n];
        for(int i=0;i<m+n;i++) cin>>a[i];
        mergeSort(a,0,m+n-1);
        cout<<a[k-1]<<endl;
        delete a;
    }
    return 0;
}
