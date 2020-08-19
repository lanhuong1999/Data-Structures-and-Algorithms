#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(string s,int k){
    int n=s.length();
    priority_queue<int>q;
    sort(s.begin(),s.end());
    int i=0;
    while(i<n){
        int dem=1;
            int j=i+1;
            while(j<n&&s[i]==s[j]){
                ++dem; ++j;
            }
        q.push(dem);
        i=j;
    }
    while(k--){
        int t=q.top();q.pop();
        t-=1; q.push(t);
    }
    ll res=0;
    while(!q.empty()){
        int t=q.top();
        res+=(t*t);
        q.pop();
    }
    cout<<res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int k;
        string s="";
        cin>>k>>s;
        solve(s,k);
        cout<<endl;
    }
    return 0;
}
