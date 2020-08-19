#include <bits/stdc++.h>
using namespace std;
vector<int>a[1005];
int n,m;
void solve(){
    int c=0,l=0;
    for(int i=1;i<=n;i++){
        if(a[i].size()%2==0) c++;
        else l++;
    }
    if(l==2) cout<<1<<endl;
    else if(c==n) cout<<2<<endl;
    else cout<<0<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        solve();
    }
    return 0;
}
