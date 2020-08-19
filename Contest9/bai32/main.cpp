#include <bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
int a[505][505];
bool vs[505][505];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={1,0,-1,-1,1,1,0,-1};
int n,m;
void BFS(int u, int v){
    queue<ii>q; q.push({u,v});
    vs[u][v]=true;
    while(!q.empty()){
        ii t=q.front(); q.pop();
        for(int i=0;i<8;i++){
            int x=t.first+dx[i];
            int y=t.second+dy[i];
            if(!vs[x][y]&&a[x][y]){
                vs[x][y]=true;
                q.push({x,y});
            }
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(vs,false,sizeof(vs));
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++) cin>>a[i][j];
        int res=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(a[i][j]==1&&!vs[i][j]){
                    BFS(i,j);
                    res++;
                }
        cout<<res<<endl;

    }
    return 0;
}
