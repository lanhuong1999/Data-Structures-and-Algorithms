#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >a;
vector<bool>vs;
int v,e;
void BFS(int u){
    queue<int>q;
    q.push(u);
    vs[u]=true;
    while(!q.empty()){
        int top=q.front(); q.pop();
        for(int i=0;i<a[top].size();i++){
            if(!vs[a[top][i]]){
                vs[a[top][i]]=true;
                q.push(a[top][i]);
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        a.clear(), vs.clear();
        cin>>v>>e;
        a.resize(v+5), vs.resize(v+5);
        for(int i=1;i<=v;i++) vs[i]=false;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        int res=0;
        for(int i=1;i<=v;i++)
            if(!vs[i]){
                res++;
                BFS(i);
            }
        cout<<res<<endl;

    }
    return 0;
}
