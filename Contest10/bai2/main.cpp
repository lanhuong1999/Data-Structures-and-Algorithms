#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
int n,m;
bool check;
void DFS(int u,int d){
    vs[u]=true;
    if(d==n) check=true;
    for(int i=0;i<a[u].size();i++)
        if(!vs[a[u][i]]){
            DFS(a[u][i],d+1);
            vs[a[u][i]]=false;
        }
}
void inkq(){
    for(int i=1;i<=n;i++){
        check=false;
        memset(vs,false,sizeof(vs));
        DFS(i,1);
        if(check){
            cout<<1<<endl; return;
        }
    }
    cout<<0<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        inkq();
    }
    return 0;
}
