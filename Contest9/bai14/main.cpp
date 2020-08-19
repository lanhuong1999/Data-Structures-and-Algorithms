#include <bits/stdc++.h>

using namespace std;
vector<vector<int> >a;
vector<bool>vs;
int v,e;
bool ktraLT(){
    for(int i=1;i<=v;i++)
        if(!vs[i]) return false;
    return true;
}
void BFS(int u){
    queue<int>q;
    vs[u]=true;
    q.push(u);
    while(!q.empty()){
        int top=q.front(); q.pop();
        for(int i=0;i<a[top].size();i++)
        if(!vs[a[top][i]]){
            vs[a[top][i]]=true;
            q.push(a[top][i]);
        }
    }
}
int main()
{
    int tc; cin>>tc;
    while(tc--){
        a.clear(),vs.clear();
        cin>>v>>e;
        a.resize(v+1), vs.resize(v+1);
        for(int i=1;i<=v;i++) vs[i]=false;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        BFS(1);
        int Q; cin>>Q;
        if(ktraLT()){
            for(int i=1;i<=Q;i++){
                int b,c; cin>>b>>c;
                cout<<"YES"<<endl;
            }
        }
        else{
            while(Q--){
                for(int i=1;i<=v;i++) vs[i]=false;
                int b,c; cin>>b>>c;
                BFS(b);
                if(vs[c]) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
