#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
typedef pair<int,ll>ii;
vector<ii>a[1005];
bool vs[1005];
int n,m;
ll res;
void solve(){
    priority_queue<ii>q;
    q.push(mp(0,1));
    while(!q.empty()){
        ll w=q.top().fi;
        int t=q.top().se;
        q.pop();
        if(!vs[t]){
            vs[t]=true;
            res-=w;
            for(int i=0;i<a[t].size();i++){
                ii tmp=a[t][i];
                if(!vs[tmp.fi]) q.push(mp(-tmp.se,tmp.fi));
            }
        }
    }
}
void reset(){
    for(int i=0;i<1005;i++)a[i].clear();
    memset(vs,false,sizeof(vs));
    res=0;
}
int main()
{
    int t; cin>>t;
    while(t--){
        reset();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            ll x,y,z; cin>>x>>y>>z;
            a[x].pb(mp(y,z));
            a[y].pb(mp(x,z));
        }
        solve();
        cout<<res<<endl;
    }
    return 0;
}
