#include <bits/stdc++.h>
#define x first
#define y second
#define maxn 105
using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
typedef pair<int,int>Point;
typedef pair<int,Point>Node;
char a[maxn][maxn];
int d[maxn][maxn];
int main()
{
    int n; cin>>n;
    memset(a,'X',sizeof(a));
    memset(d,999999,sizeof(d));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    priority_queue<Node>q;
    int x,y,z,t;
    cin>>x>>y>>z>>t;
    x++, y++, z++, t++;
    q.push({0,{x,y}});
    while(!q.empty()){
        Node node=q.top(); q.pop();
        int cnt=-node.first;
        Point p=node.second;
        if(d[p.x][p.y]<cnt) continue;
        d[p.x][p.y]=cnt;
        for(int i=0;i<4;i++){
            int xx=p.x+dx[i];
            int yy=p.y+dy[i];
            while(d[xx][yy]>cnt+1&&a[xx][yy]=='.'){
                d[xx][yy]=cnt+1;
                q.push({-d[xx][yy],{xx,yy}});
                xx+=dx[i];
                yy+=dy[i];
            }
        }
    }
    cout<<d[z][t]<<endl;
    return 0;
}
