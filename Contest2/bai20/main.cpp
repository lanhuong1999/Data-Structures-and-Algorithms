#include <bits/stdc++.h>
#define maxn 15
using namespace std;
int n,a[maxn];
vector<vector<int> > res;
void solve(){
    while(n>0){
        vector<int> v;
        for(int i=0;i<n;i++) v.push_back(a[i]);
        res.push_back(v);
        for(int i=0;i<n-1;i++)
            a[i]=a[i]+a[i+1];
        --n;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        res.clear();
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        solve();
        for(int i=res.size()-1;i>=0;i--){
            cout<<"[";
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j!=res[i].size()-1) cout<<" ";
            }
            cout<<"]"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
