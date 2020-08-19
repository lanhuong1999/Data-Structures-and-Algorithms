#include <bits/stdc++.h>
using namespace std;
vector<int>a[100005];
bool vs[100005];
int n,m,d;
void DFS(int u){
    vs[u]=true;
    d+=1;
    for(int i=0;i<a[u].size();i++)
        if(!vs[a[u][i]])
            DFS(a[u][i]);
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<100005;i++) a[i].clear();
        memset(vs,false,sizeof(vs));
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int res=0;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                d=0;
                DFS(i); res=max(res,d);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
