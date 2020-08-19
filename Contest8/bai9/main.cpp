#include <bits/stdc++.h>

using namespace std;
struct node{
    int val,cnt;
};
int solve(int n, int m){
    set<int>s;
    s.insert(n);
    queue<node>q;
    q.push({n,0});
    while(!q.empty()){
        node t=q.front(); q.pop();
        if(t.val==m) return t.cnt;
        if(t.val*2==m||t.val-1==m) return t.cnt+1;

        if(s.find(t.val*2)==s.end()&&t.val<m){
            q.push({t.val*2,t.cnt+1});
            s.insert(t.val*2);
        }
        if(s.find(t.val-1)==s.end()&&t.val-1>0){
            q.push({t.val-1,t.cnt+1});
            s.insert(t.val-1);
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}
