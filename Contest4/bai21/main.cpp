#include <bits/stdc++.h>
const long long mod =1e9+7;
typedef long long ll;
using namespace std;
ll luythua(int n, int k){
    if(k==1) return n;
    if(k==0) return 1;
    ll a=luythua(n,k/2);
    if(k%2) return ((a*n)%mod)*a%mod;
    return a*a%mod;
}
int main()
{

    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<luythua(n,k)<<endl;
    }
    return 0;
}
