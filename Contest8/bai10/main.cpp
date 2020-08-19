#include <bits/stdc++.h>

using namespace std;
struct node{
    int val,cnt;
};
int solve(int n){
    set<int>s;
    s.insert(n);
    queue<node>q;
    q.push({n,0});
    while(!q.empty()){
        node t=q.front(); q.pop();
        if(t.val==1) return t.cnt;
        if(t.val-1==1) return t.cnt+1;
        if(s.find(t.val-1)==s.end()&&t.val-1>0){
            q.push({t.val-1,t.cnt+1});
            s.insert(t.val-1);
        }
        for(int i=2;i*i<=t.val;i++){
            if(t.val%i==0){
                if(s.find(t.val/i)==s.end()){
                    q.push({t.val/i,t.cnt+1});
                    s.insert(t.val/i);
                }
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
