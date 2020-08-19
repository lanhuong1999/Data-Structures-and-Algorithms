#include <bits/stdc++.h>
typedef long long ll;
const long long mod =123456789;
using namespace std;
ll solve(int k, ll n){
    if(n==0) return 1;
    ll x= solve(k,n/2);
    if(n%2) return ((x*k)%mod)*x%mod;
    return x*x%mod;
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(2,n-1)<<endl;
    }
    return 0;
}
