#include<bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
int v,e;
bool check;
void DFS(int u, int t){
    vs[u]=true;
    for(int i=0;i<a[u].size();i++){
        if(!vs[a[u][i]]) DFS(a[u][i],u);
        else if(a[u][i]!=t) check=true;
    }
}
void ktraCT(){
    check=false;
        for(int i=1;i<=v;i++){
            memset(vs,false,sizeof(vs));
            DFS(i,0);
            if(check){
                cout<<"YES\n"; return;
            }
        }
        cout<<"NO\n";
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
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
