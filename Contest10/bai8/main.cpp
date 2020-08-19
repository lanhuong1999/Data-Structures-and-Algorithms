#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
bool vs[1005];
vector<pair<int,int> >ck;
int n,m,u;
void DFS(int u){
    stack<int>st; st.push(u);
    vs[u]=true;
    while(!st.empty()){
        int t=st.top(); st.pop();
        for(int i=0;i<a[t].size();i++)
            if(!vs[a[t][i]]){
                vs[a[t][i]]=true;
                st.push(t); st.push(a[t][i]);
                ck.push_back({t,a[t][i]});
                break;
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
        ck.clear();
        memset(vs,false,sizeof(vs));
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        DFS(u);
        if(ktraLT()){
            for(int i=0;i<ck.size();i++)
                cout<<ck[i].first<<" "<<ck[i].second<<endl;
        }
        else cout<<"-1\n";
    }
    return 0;
}
