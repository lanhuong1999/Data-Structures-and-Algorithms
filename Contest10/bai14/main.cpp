#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef pair<int,int>ii;
vector<ii>a[1005];
int pa[1005],d[1005];
int n,m,s;
priority_queue<ii, vector<ii>, greater<ii> > q;
void Dijkstra(int u){
    for(int i=1;i<=n;i++){
        d[i]=1e9; pa[i]=-1;
    }
    d[u]=0;
    q.push({0,u});
    while(!q.empty()){
        int t=q.top().se; q.pop();
        for(int i=0;i<a[t].size();i++){
            int x=a[t][i].fi;
            int w=a[t][i].se;
            if(d[x]>d[t]+w){
                d[x]=d[t]+w;
                pa[x]=t;
                q.push({-d[x],x});
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<d[i]<<" ";
    cout<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        while(!q.empty()) q.pop();
        cin>>n>>m>>s;
        for(int i=0;i<m;i++){
            int x,y,z; cin>>x>>y>>z;
            a[x].push_back({y,z});
            a[y].push_back({x,z});
        }
        Dijkstra(s);
    }
    return 0;
}
