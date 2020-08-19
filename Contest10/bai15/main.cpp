#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
const int INF=1e7;
using namespace std;
typedef pair<int,int>ii;
vector<ii>a[1005];
int n,m,u,cnt;
int d[1005],vs[1005];
bool bellmanford(){
    for(int i=1;i<=n;i++) d[i]=INF;
    d[u]=0;
    queue<int>q; q.push(u);
    vs[u]=1;
    while(!q.empty()){
        cnt++;
        int t=q.front(); q.pop();
        vs[t]=1;
        for(int i=0;i<a[t].size();i++){
            int v=a[t][i].se;
            int w=a[t][i].fi;
            if(d[v]>d[t]+w){
                d[v]=d[t]+w;
                if(!vs[v]){
                    q.push(v); vs[v]=1;
                }
            }
        }
    }

}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        memset(vs,0,sizeof(vs));
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++){
            int x,y,z; cin>>x>>y>>z;
            a[x].push_back(mp(z,y));
        }
        bellmanford();
        if(cnt>n) cout<<"-1\n";
        else{
            for(int i=1;i<=n;i++)
                d[i]==INF? cout<<"INF ": cout<<d[i]<<" ";
            cout<<endl;
        }

    }
}
