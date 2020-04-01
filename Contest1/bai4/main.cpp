#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int>res;
vector<int>ans;


void Try(ll n){
    if(n==1) return;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int x=0;
            if(!res.empty()) x=res.back();
            if(i==x){
                int dem=ans.back()+1;
                ans.pop_back();
                ans.push_back(dem);
            }
            else{
                res.push_back(i);
                ans.push_back(1);
            }
            Try(n/i);
            break;
        }
    }
}


int main()
{
    freopen("input.txt","r",stdin);
    int T; cin>>T;
    for(int t=1;t<=T;t++){
        ll n;
        res.clear();
        ans.clear();
        cin>>n;
        Try(n);

        cout<<"Test "<<t<<": ";
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<"("<<ans[i]<<") ";
        }
        cout<<endl;
    }
    return 0;
}
