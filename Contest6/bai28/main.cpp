#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int a[], int n){
    for(int i=0;i<n;i++){
        int x=a[i];
        int j=i;
        while(j>0&&a[j-1]>x){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
        cout<<"Buoc "<<i<<": ";
        for(int k=0;k<=i;k++)
            cout<<a[k]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n; cin>>n;
    int a[105];
    for(int i=0;i<n;i++) cin>>a[i];
    insertion_sort(a,n);
    return 0;
}
