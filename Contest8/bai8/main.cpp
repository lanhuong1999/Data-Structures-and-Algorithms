#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        queue<ll>q;
        q.push(1);
        while(!q.empty()){
            ll d=q.front(); q.pop();
            if(d%n==0){
                cout<<d;
                break;
            }
            q.push(d*10+0);
            q.push(d*10+1);
        }
        cout<<endl;
    }
    return 0;
}
