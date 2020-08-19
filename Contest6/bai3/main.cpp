#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
using namespace std;
ll solve(pair<int,int>p[], int n){
    sort(p,p+n);
    ll ans=0;
    bool vs[n]={false};
    for(int i=0;i<n;i++){
        if(vs[i]||p[i].s==i)
            continue;
        int j=i,res=0;
        while(!vs[j]){
            vs[j]=true;
            j=p[j].s;
            res++;
        }
        if(res>0) ans+=(res-1);
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].f;
            p[i].s=i;
        }
        cout<<solve(p,n)<<endl;
    }
    return 0;
}
