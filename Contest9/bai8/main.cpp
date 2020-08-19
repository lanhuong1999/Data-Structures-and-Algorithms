#include <bits/stdc++.h>

using namespace std;
int v,e;
vector<vector<int> >a;
vector<bool>vs;
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=true;
    cout<<u<<" ";
    while(!q.empty()){
        int t=q.front(); q.pop();
        for(int i=0;i<a[t].size();i++){
            if(!vs[a[t][i]]){
                q.push(a[t][i]); vs[a[t][i]]=true;
                cout<<a[t][i]<<" ";
            }
        }
    }
    cout<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        a.clear(); vs.clear();
        int u; cin>>v>>e>>u;
        a.resize(v+1), vs.resize(v+1);
        for(int i=1;i<=v;i++) vs[i]=false;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        BFS(u);
    }
    return 0;
}
