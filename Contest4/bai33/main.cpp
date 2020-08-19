#include <bits/stdc++.h>
const long long mod=1e9+7;
typedef long long ll;
using namespace std;
ll dao(ll n){
    ll d=0;
    while(n!=0){
        d=d*10+n%10;
        n/=10;
    }
    return d;
}
ll expN(ll n,ll r){
    if(r==0) return 1;
    ll x=expN(n,r/2);
    if(r%2) return (x*x%mod)*n%mod;
    return x*x%mod;
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,r;
        cin>>n;
        r=dao(n);
        cout<<expN(n,r)<<endl;
    }
    return 0;
}
