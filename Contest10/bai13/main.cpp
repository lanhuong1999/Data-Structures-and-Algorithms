#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
using namespace std;
typedef pair<int,int>ii;
pair<ii,int>a[1005];
int d[1005];
bool vs[1005];
int n,m;
bool bellmanFord(int u){
    d[u]=0;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<m;j++){
            int u=a[j].fi.fi;
            int v=a[j].fi.se;
            int w=a[j].se;
            if(d[u]!=INT_MAX&&d[u]+w<d[v])
                d[v]=d[u]+w;
        }
    }
    for(int i=0;i<m;i++){
        int u=a[i].fi.fi;
        int v=a[i].fi.se;
        int w=a[i].se;
        if(d[u]!=INT_MAX&&d[u]+w<d[v]) return true;
    }
    return false;
}
bool solve(){
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            if(bellmanFord(i)) return true;
            for(int j=1;j<=n;j++)
                if(d[j]!=INT_MAX) vs[j]=true;
        }
    }
    return false;
}
int main(){
    int t; cin>>t;
    while(t--){
        memset(d,0,sizeof(d));
        memset(vs,false,sizeof(vs));
        cin>>n>>m;
        for(int i=1;i<=n;i++) d[i]=INT_MAX;
        for(int i=0;i<m;i++){
            int x,y,z; cin>>x>>y>>z;
            a[i]=mp(mp(x,y),z);
        }
        if(solve()) cout<<"1\n";
        else cout<<"0\n";
    }
}
