#include <bits/stdc++.h>
using namespace std;
vector<int>a[100005];
bool vs[100005];
int n,m;
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=true;
    while(!q.empty()){
        int t=q.front(); q.pop();
        for(int i=0;i<a[t].size();i++)
            if(!vs[a[t][i]]){
                vs[a[t][i]]=true;
                q.push(a[t][i]);
            }
    }
}
bool ktraLT(){
    for(int i=1;i<=n;i++)
        if(!vs[i]) return false;
    return true;
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
        BFS(1);
        if(ktraLT()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
