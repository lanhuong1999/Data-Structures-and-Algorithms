#include <bits/stdc++.h>
#define maxn 105
using namespace std;
void solve(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]) swap(a[i],a[j]);
        cout<<"Buoc "<<i+1<<": ";
        for(int k=0;k<n;k++) cout<<a[k]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n,a[maxn];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,n);
    return 0;
}
