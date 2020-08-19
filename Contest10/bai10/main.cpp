#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
using namespace std;
pair<int,pair<int,int> >a[1005];
int pa[105], ra[105];
int n,m;
int find_set(int x){
    if(x!=pa[x]) pa[x]=find_set(pa[x]);
    return pa[x];
}
void union_set(int x, int y){
    int px=find_set(x), py=find_set(y);
    if(ra[px]>ra[py]) pa[py]=px;
    else if(ra[px]<ra[py]) pa[px]=py;
    else{
        pa[py]=px;
        ra[px]++;
    }
}
int Kruskal(){
    sort(a,a+m);
    int res=0;
    for(int i=0;i<m;i++){
        int x=find_set(a[i].se.fi);
        int y=find_set(a[i].se.se);
        if(x!=y){
            res+=a[i].fi;
            union_set(x,y);
        }
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++) pa[i]=i, ra[i]=0;
        for(int i=0;i<m;i++){
            int x,y,z; cin>>x>>y>>z;
            a[i]=mp(z,mp(x,y));
        }
        cout<<Kruskal()<<endl;
    }
    return 0;
}
