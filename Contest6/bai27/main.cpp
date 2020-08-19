#include <bits/stdc++.h>

using namespace std;
void selection_sort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++)
            if(a[mini]>a[j])mini=j;
        swap(a[i],a[mini]);
        cout<<"Buoc "<<i+1<<": ";
        for(int k=0;k<n;k++)
            cout<<a[k]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n; cin>>n;
    int a[105];
    for(int i=0;i<n;i++) cin>>a[i];
    selection_sort(a,n);
    return 0;
}
