#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
int v,e;
vector<pair<int,int> >p,res;
void reset(){
    for(int i=0;i<1005;i++) a[i].clear();
    memset(vs,false,sizeof(vs));
}
void BFS(int u){
    queue<int>q; q.push(u);
    vs[u]=true;
    while(!q.empty()){
        int top=q.front(); q.pop();
        for(int i=0;i<a[top].size();i++)
            if(!vs[a[top][i]]){
                vs[a[top][i]]=true;
                q.push(a[top][i]);
            }
    }
}
int tplt(){
    int ans=0;
    for(int i=1;i<=v;i++)
        if(!vs[i]){
            ans++;
            BFS(i);
        }
    return ans;
}
int ktra(int c){
    reset();
    for(int i=0;i<e;i++){
        if(i==c) continue;
        a[p[i].first].push_back(p[i].second);
        a[p[i].second].push_back(p[i].first);
    }
    int ans=tplt();
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--){
        p.clear(), res.clear();
        cin>>v>>e;
        reset();
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            p.push_back({b,c});
            a[b].push_back(c);
            a[c].push_back(b);
        }
        int lt=tplt();
        for(int i=0;i<e;i++){
            int cnt=ktra(i);
            if(cnt>lt){
                if(p[i].first<p[i].second) res.push_back({p[i].first,p[i].second});
                else res.push_back({p[i].second,p[i].first});
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
            cout<<res[i].first<<" "<<res[i].second<<" ";
        cout<<endl;
    }
    return 0;
}
