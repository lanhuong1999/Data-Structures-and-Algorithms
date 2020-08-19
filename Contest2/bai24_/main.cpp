#include <bits/stdc++.h>
#define maxn 15
using namespace std;
int n,k,a[maxn],b[maxn];
vector< vector<int> >res;
void ktra(){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i]*b[i];
    if(sum==k){
        vector<int> v;
        for(int i=0;i<n;i++)
            if(a[i]*b[i]!=0) v.push_back(a[i]);
        if(v.size())res.push_back(v);
    }
}
void solve(int i){
    for(int j=1;j>=0;j--){
        b[i]=j;
        if(i==n-1) ktra();
        else solve(i+1);
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        res.clear();
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        solve(0);
        if(res.size()){
            for(int i=0;i<res.size();i++){
                cout<<"[";
                for(int j=0;j<res[i].size();j++){
                    cout<<res[i][j];
                    if(j!=res[i].size()-1) cout<<" ";
                }
                cout<<"] ";
            }
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
