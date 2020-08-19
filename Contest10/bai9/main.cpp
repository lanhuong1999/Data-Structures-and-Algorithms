#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
vector<pair<int,int> >ck;
int n,m,u;
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=true;
    while(!q.empty()){
        int t=q.front(); q.pop();
        for(int i=0;i<a[t].size();i++)
            if(!vs[a[t][i]]){
                vs[a[t][i]]=true;
                q.push(a[t][i]);
                ck.push_back({t,a[t][i]});
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
        for(int i=0;i<1005;i++) a[i].clear();
        memset(vs,0,sizeof(vs));
        ck.clear();
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(u);
        if(ktraLT()){
            for(int i=0;i<ck.size();i++)
                cout<<ck[i].first<<" "<<ck[i].second<<endl;
        }
        else cout<<"-1\n";
    }
    return 0;
}
