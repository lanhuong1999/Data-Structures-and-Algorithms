#include <bits/stdc++.h>
using namespace std;
int n,m,d[1005][1005];
void Floyd(){
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            d[i][j]=1e9;
            if(i==j) d[i][j]=0;
        }
    for(int i=0;i<m;i++){
        int u,v,w; cin>>u>>v>>w;
        d[u][v]=d[v][u]=w;
    }
    Floyd();
    int q; cin>>q;
    while(q--){
        int u,v; cin>>u>>v;
        cout<<d[u][v]<<endl;
    }
    return 0;
}
