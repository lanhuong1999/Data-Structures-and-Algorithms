#include <bits/stdc++.h>
const long long mod= 1e9+7;
typedef long long ll;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int *a; a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll res=0;
        for(int i=0;i<n;i++){
            res=(res+((ll)(a[i]*i))%mod)%mod;
        }
        cout<<res<<endl;
    }
    return 0;
}
