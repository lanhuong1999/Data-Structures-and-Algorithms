#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,x;
int a[maxn];
bool c;
void inkq(vector<int>res){
    c=true;
    cout<<"[";
    for(int i=0;i<res.size()-1;i++) cout<<res[i]<<" ";
    cout<<res[res.size()-1]<<"] ";
}
void solve(vector<int>kq, int sum, int i){
    if(sum<0) return;
    if(sum==0) inkq(kq);
    while(i<n && sum-a[i]>=0){
        kq.push_back(a[i]);
        solve(kq,sum-a[i],i);
        i++;
        kq.pop_back();
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        c=false;
        vector<int>res;
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        solve(res,x,0);
        if(!c) cout<<-1;
        cout<<endl;
    }
    return 0;
}
