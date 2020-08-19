#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[maxn];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0;i<n/2;i++){
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        if(n%2) cout<<a[n/2];
        cout<<endl;
    }
    return 0;
}
