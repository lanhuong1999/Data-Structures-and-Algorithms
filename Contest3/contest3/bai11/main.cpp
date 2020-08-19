#include <bits/stdc++.h>
typedef long long ll;
const long long mod= 1e9+7;
using namespace std;

int main()
{
    int n; cin>>n;
    priority_queue<ll>q;
    for(int i=0;i<n;i++){
        ll temp; cin>>temp;
        q.push(-temp);
    }
    ll res=0;
    while(q.size()>1){
        ll a= q.top(); q.pop();
        ll b=q.top(); q.pop();
        ll t=(-(a+b))%mod;
        q.push(-t);
        res=(res+t)%mod;

    }
    cout<<res<<endl;
    return 0;
}
