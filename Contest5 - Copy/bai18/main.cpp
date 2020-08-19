#include <bits/stdc++.h>
using namespace std;
pair<int,int>p[105];
int f[105];
int n;
bool cmp_pair(pair<int,int>&x,pair<int,int>&y){
    return x.first<y.first;
}
void solve(){
    int res=0;
    memset(f,0,sizeof(f));
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++)
            if(p[i].first>p[j].second) f[i]=max(f[i],f[j]+1);
        res=max(res,f[i]);
    }
    cout<<res<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>p[i].first>>p[i].second;
        sort(p+1,p+n+1,cmp_pair);
        solve();
    }
    return 0;
}
