#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k,a[maxn];
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0;i<k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
