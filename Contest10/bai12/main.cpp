#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int,int>ii;
pair<ii,int>a[1005];
vector<int>pa,ra;
int n,m;
int find_set(int x){
    if(x!=pa[x]) pa[x]=find_set(pa[x]);
    return pa[x];
}
void union_set(int x, int y){
    int px=find_set(x), py=find_set(y);
    if(ra[px]<ra[py]) pa[px]=py;
    else if(ra[px]>ra[py]) pa[py]=px;
    else{
        pa[py]=px;
        ra[px]++;
    }
}
void Boruvka(){
    pa.resize(n+5), ra.resize(n+5);
    int cheapest[n+5];
    for(int i=1;i<=n;i++){
        pa[i]=i;
        ra[i]=0;
        cheapest[i]=-1;
    }
    int numTrees=n, res=0;
    while(numTrees>1){
        for(int i=1;i<=n;i++) cheapest[i]=-1;
        for(int i=0;i<m;i++){
            int x=find_set(a[i].fi.fi);
            int y=find_set(a[i].fi.se);
            if(x==y) continue;
            else{
                if(cheapest[x]==-1||a[cheapest[x]].se>a[i].se)
                    cheapest[x]=i;
                if(cheapest[y]==-1||a[cheapest[y]].se>a[i].se)
                    cheapest[y]=i;
            }
        }
        for(int i=1;i<=n;i++){
            if(cheapest[i]!=-1){
                int x=find_set(a[cheapest[i]].fi.fi);
                int y=find_set(a[cheapest[i]].fi.se);
                if(x==y) continue;
                res+=a[cheapest[i]].se;
                union_set(x,y);
                numTrees--;
            }
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y,z; cin>>x>>y>>z;
            a[i]=mp(mp(x,y),z);
        }
        Boruvka();
    }
    return 0;
}
