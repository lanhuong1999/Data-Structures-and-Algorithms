#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >a;
vector<int>pre;
int v,e,u,t;
void BFS(int u){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int top=q.front(); q.pop();
        for(int i=0;i<a[top].size();i++){
            if(pre[a[top][i]]==0){
                q.push(a[top][i]);
                pre[a[top][i]]=top;
            }
        }
    }
}
int main()
{
    int tc; cin>>tc;
    while(tc--){
        a.clear(), pre.clear();
        cin>>v>>e>>u>>t;
        a.resize(v+1), pre.resize(v+1);
        for(int i=1;i<=v;i++) pre[i]=0;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        pre[u]=u;
        BFS(u);
        if(pre[t]==0) cout<<-1;
        else{
            vector<int>res;
            res.push_back(t);
            while(pre[t]!=u){
                res.push_back(pre[t]);
                t=pre[t];
            }
            res.push_back(u);
            for(int i=res.size()-1;i>=0;i--)
                cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
