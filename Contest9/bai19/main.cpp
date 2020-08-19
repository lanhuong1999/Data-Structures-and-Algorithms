#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >a;
vector<bool>vs;
int v,e;
void DFS(int u){
    vs[u]=true;
    for(int i=0;i<a[u].size();i++)
        if(!vs[a[u][i]]) DFS(a[u][i]);
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
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++) vs[j]=false;
            vs[i]=true;
            int cnt=0;
            for(int j=1;j<=v;j++){
                if(!vs[j]){
                    cnt++;
                    DFS(j);
                }
            }
            if(cnt>res) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
