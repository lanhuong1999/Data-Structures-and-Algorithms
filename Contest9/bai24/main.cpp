#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
int vs[1005];
int v,e;
bool check;
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=1;
    while(!q.empty()){
        if(check) break;
        int top=q.front(); q.pop();
        for(int i=0;i<a[top].size();i++){
            if(vs[a[top][i]]==0){
                vs[a[top][i]]=1;
                q.push(a[top][i]);
            }
            else if(vs[a[top][i]]==1) check=true;
        }
        vs[top]=2;
    }
}
void ktraCT(){
    check=false;
    for(int i=1;i<=v;i++){
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
        check=false;
        for(int i=0;i<1005;i++) a[i].clear();
        memset(vs,0,sizeof(vs));
        cin>>v>>e;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        ktraCT();
    }
    return 0;
}
