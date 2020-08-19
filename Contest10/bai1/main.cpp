#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
int n,m,s;
bool ktra(int v,int color[],  int c){
    for(int i=0;i<a[v].size();i++){
        if(c==color[a[v][i]]) return false;
    }
    return true;
}
bool solve(int v, int color[]){
    if(v==n+1) return true;
    for(int c=1;c<=s;c++){
        if(ktra(v,color,c)){
            color[v]=c;
            if(solve(v+1,color)) return true;
            color[v]=0;
        }
    }
    return false;
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        cin>>n>>m>>s;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }

        int color[n+5]={0};
        bool res=solve(1,color);
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
