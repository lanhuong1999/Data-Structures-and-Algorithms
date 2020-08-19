#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
pair<int,int>a[maxn];
int n,dem;
long long res;
bool sortPair(pair<int,int>x, pair<int,int>y){
    return x.second>y.second;
}
void solve(){
    sort(a,a+n,sortPair);
    int vs[maxn]={0};
    for(int i=0;i<n;i++){
        for(int j=a[i].first-1;j>=0;j--){
            if(!vs[j]){
                dem++;
                res+=a[i].second;
                vs[j]=1;
                break;
            }
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        dem=0;res=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int id; cin>>id;
            cin>>a[i].first>>a[i].second;
        }
        solve();
        cout<<dem<<" "<<res<<endl;
    }
    return 0;
}
