#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
int n,m;
bool check;
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=true;
    while(!q.empty()){
        if(check) break;
        int t=q.front(); q.pop();
        for(int i=0;i<a[t].size();i++){
            int v=a[t][i];
            if(!vs[v]){
                vs[v]=true;
                q.push(v);
            }
            else if(v==u) check=true;
        }
    }
}
void ktraCT(){
    check=false;
    for(int i=1;i<=n;i++){
        memset(vs,false,sizeof(vs));
        BFS(i);
        if(check){
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
        }
        ktraCT();
    }
    return 0;
}
