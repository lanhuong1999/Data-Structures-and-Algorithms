#include <bits/stdc++.h>
const long long maxn=1e5;
using namespace std;
vector<int> snt;
vector<int>mt[maxn];
struct node{
    int val; int cnt;
};
void init_snt(){
    bool c[maxn]={false};
    for(int i=2;i<=9999;i++){
        if(!c[i]){
            for(int j=i*i;j<=9999;j+=i)
                c[j]=true;
        }
    }
    for(int i=1000;i<=9999;i++)
        if(!c[i]) snt.push_back(i);
}
bool ktra(int x, int y){
    int dem=0;
    while(x&&y){
        if((x%10)!=(y%10)) dem++;
        x/=10; y/=10;
    }
    return dem==1;
}
void init_mt(){
    for(int i=0;i<snt.size()-1;i++)
        for(int j=i+1;j<snt.size();j++)
            if(ktra(snt[i],snt[j])){
                mt[snt[i]].push_back(snt[j]);
                mt[snt[j]].push_back(snt[i]);
            }
}
int BFS(int n, int m){
    bool vs[maxn]={false};
    queue<node>q;
    q.push({n,0});
    while(!q.empty()){
        node t=q.front(); q.pop();
        vs[t.val]=true;
        if(t.val==m) return t.cnt;
        for(int i=0;i<mt[t.val].size();i++){
            int x=mt[t.val][i];
            if(!vs[x]){
                vs[x]=true;
                q.push({x,t.cnt+1});
            }
        }
    }
}
int main()
{
    init_snt();
    init_mt();
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        cout<<BFS(n,m)<<endl;
    }
    return 0;
}
