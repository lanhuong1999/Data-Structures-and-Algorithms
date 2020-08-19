#include <bits/stdc++.h>
using namespace std;
void mergeA(int a[],int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++)
        l[i]=a[left+i];
    for(int i=0;i<n2;i++)
        r[i]=a[mid+1+i];
    int i,j,k;
    i=j=0, k=left;
    while(i<n1&&j<n2){
        if(l[i]<=r[j]) a[k]=l[i++];
        else a[k]=r[j++];
        k++;
    }
    while(i<n1){
        a[k]=l[i]; i++; k++;
    }
    while(j<n2){
        a[k]=r[j]; j++; k++;
    }
}
void mergeSort(int a[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        mergeA(a,l,m,r);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n, *a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        mergeSort(a,0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        delete a;
    }
    return 0;
}
