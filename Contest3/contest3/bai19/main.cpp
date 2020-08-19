#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll ts, ll ms){
    if(ms%ts==0){
        cout<<"1/"<<ms/ts;
        return;
    }
    ll k=ms/ts+1;
    cout<<"1/"<<k<<" + ";
    ll ts1=(ts*k)-ms;
    ll ms1=ms*k;
    solve(ts1,ms1);
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll ts,ms;
        cin>>ts>>ms;
        solve(ts,ms);
        cout<<endl;
    }
    return 0;
}
