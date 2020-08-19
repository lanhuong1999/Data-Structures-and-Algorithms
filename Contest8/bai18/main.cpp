#include <bits/stdc++.h>
#define x first
#define y second
#define maxn 505
using namespace std;
typedef pair<int,int>Point;
typedef pair<int,Point>Node;
int n,m,a[maxn][maxn],d[maxn][maxn];
priority_queue<Node>q;
int dx[4]={0,0,-1,1}, dy[4]={-1,1,0,0};
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==2){
                q.push({0,{i,j}});
                d[i][j]=0;
            }
            else d[i][j]=INT_MAX;
        }
    while(!q.empty()){
        Node node=q.top(); q.pop();
        int cnt=-node.first;
        Point p=node.second;
        if(cnt<d[p.x][p.y]) continue;
        d[p.x][p.y]=cnt;
        for(int i=0;i<4;i++){
            int xx=p.x+dx[i], yy=p.y+dy[i];
            if(xx<1||xx>n||yy<1||yy>m||d[xx][yy]<cnt+1||a[xx][yy]==0) continue;
            d[xx][yy]=cnt+1;
            q.push({-d[xx][yy],{xx,yy}});
        }
    }
    int res=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if(a[i][j]==1&&d[i][j]==INT_MAX){
                cout<<-1<<endl;
                return 0;
            }
            if(a[i][j]==1) res=max(res,d[i][j]);
        }
    cout<<res<<endl;
    return 0;
}
