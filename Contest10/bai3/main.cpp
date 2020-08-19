#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
int dd[1005];
int n,m;
bool BFS(int u){
    queue<int>q; q.push(u);
    dd[u]=1;
    while(!q.empty()){
        int t=q.front(); q.pop();
        for(int i=0;i<a[t].size();i++){
            if(a[t][i]==t) return false;
            if(dd[a[t][i]]==-1){
                dd[a[t][i]]=1-dd[t];
                q.push(a[t][i]);
            }
            else if(dd[a[t][i]]==dd[t]) return false;
        }
    }
    return true;
}
bool isBipartite(){
    for(int i=1;i<=n;i++)
        if(dd[i]==-1)
            if(!BFS(i)) return false;
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        memset(dd,-1,sizeof(dd));
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if(isBipartite()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
