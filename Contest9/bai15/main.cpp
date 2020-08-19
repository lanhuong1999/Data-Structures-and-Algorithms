#include <bits/stdc++.h>
using namespace std;
int v,e;
vector<vector<int> >a;
vector<bool>vs;
void DFS(int u){
    vs[u]=true;
    for(int i=0;i<a[u].size();i++){
        if(!vs[a[u][i]]) DFS(a[u][i]);
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
                DFS(i);
            }
        cout<<res<<endl;
    }
    return 0;
}
