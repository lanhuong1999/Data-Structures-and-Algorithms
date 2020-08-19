#include <bits/stdc++.h>
typedef long long ll;
const long long mod=1e9+7;
using namespace std;
int n,k;
ll solve(){
    if(k>n) return 0;
    ll res=1;
    for(int i=n-k+1;i<=n;i++)
        res=((res%mod)*i)%mod;
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<solve()<<endl;
    }
    return 0;
}
