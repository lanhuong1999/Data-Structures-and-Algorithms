#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
int n,m;
void DFS(int u){
    vs[u]=true;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(!vs[v]){
            vs[v]=true; DFS(v);
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
        memset(vs,false,sizeof(vs));
        cin>>n;
        for(int i=1;i<=n-1;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        DFS(1);
        if(ktraLT()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
