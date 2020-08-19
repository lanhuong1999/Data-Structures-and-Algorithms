#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
pair<int,int>p[maxn];
int n;
bool sortPair(pair<int,int>x,pair<int,int>y){
    if(x.second==y.second) return x.first<y.first;
    return x.second<y.second;
}
void solve(){
    int t=p[0].second;
    int res=1;
    for(int i=1;i<n;i++){
        if(p[i].first>=t){
            t=p[i].second;
            res++;
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++) cin>>p[i].first;
        for(int i=0;i<n;i++) cin>>p[i].second;
        sort(p,p+n,sortPair);
        solve();
    }
    return 0;
}
