#include <bits/stdc++.h>
#define maxn 100005
typedef long long ll;
using namespace std;
ll solve(int b[], int m, int d[], int x){
    ll res=0;
    if(x==0) return 0;
    else if(x==1) return d[0];
    int index=upper_bound(b,b+m,x)-b;
    res+=m-index;
    res+=d[0]+d[1];
    if(x==2) res-=(d[3]+d[4]);
    if(x==3) res+=d[2];
    return res;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n,m,a[maxn],b[maxn];
        cin>>n>>m;
        int d[10]={0};
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<5) d[b[i]]++;
        }
        sort(b,b+m);
        ll res=0;
        for(int i=0;i<n;i++){
            res+=solve(b,m,d,a[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
