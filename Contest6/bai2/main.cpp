#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int a[maxn],n,x;
bool cmp(int y, int z){
    return abs(x-y)<abs(x-z);
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        stable_sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;
}
