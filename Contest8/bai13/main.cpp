#include <bits/stdc++.h>
#define maxn 100005
bool F[maxn];
using namespace std;
bool ktra(int n){
    priority_queue<int>q;
    while(n){
        q.push(n%10);
        n/=10;
    }
    if(!q.empty()&&q.top()>5) return false;
    while(!q.empty()){
        int t=q.top(); q.pop();
        if(!q.empty()&&q.top()==t) return false;
    }
    return true;
}
int main()
{
    for(int i=0;i<=100000;i++) F[i]=ktra(i);
    int t; cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int res=0;
        for(int i=l;i<=r;i++)
            if(F[i]) res++;
        cout<<res<<endl;

    }
    return 0;
}
