#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
int n,a[maxn];
void inkq(){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void hvkt(){
    int i,j;
    i=j=n-1;
    while(a[i]<=a[i-1])--i;
    if(i==0){
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    while(a[j]<=a[i-1])--j;
    swap(a[j],a[i-1]);
    for(j=n-1;j>i;j--,i++) swap(a[i],a[j]);
    inkq();
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
            cin>>a[i];
        hvkt();
    }
    return 0;
}
