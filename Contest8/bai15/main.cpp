#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
struct Point{
    int x,y,cnt;
};
int solve(int m, int n){
    queue<Point>q;
    q.push({1,1,0});
    while(!q.empty()){
        Point p=q.front();
        q.pop();
        if(p.x==m&&p.y==n) return p.cnt;
        int d=a[p.x][p.y];
        if((p.x+d==m&&p.y==n)||(p.x==m&&p.y+d==n)) return p.cnt+1;
        if(p.x+d<=m) q.push({p.x+d,p.y,p.cnt+1});
        if(p.y+d<=n) q.push({p.x,p.y+d,p.cnt+1});
    }
    return -1;

}
int main()
{
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++) cin>>a[i][j];
        cout<<solve(m,n)<<endl;
    }
    return 0;
}
