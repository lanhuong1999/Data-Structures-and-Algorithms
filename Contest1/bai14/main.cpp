#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int vs[maxn];
int n;
int a[maxn];
vector< pair<int,int> >res;
bool sortPair(const pair<int,int> &x, const pair<int,int>&y){
    return (x.second>y.second);
}
void counter(){
    for(int i=0;i<n;i++){
        if(vs[i]==0){
            vs[i]++;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    vs[i]++;
                    vs[j]=-1;
                }
            }

        }
    }
}
void solve(){
    for(int i=0;i<n;i++){
        if(vs[i]!=-1) res.push_back(make_pair(a[i],vs[i]));
    }
    sort(res.begin(),res.end(),sortPair);
}
int main()
{
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        res.clear();
        memset(a,0,sizeof(a));
        memset(vs,0,sizeof(vs));
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        counter();
        solve();
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].second;j++) cout<<res[i].first<<" ";
        }
        cout<<endl;
    }
    return 0;
}
