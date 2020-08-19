#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int k; cin>>k;
        string s; cin>>s;
        if(k>s.length()) return 0;
        ll dem[26]={0};
        for(int i=0;i<s.length();i++)
            dem[s[i]-'A']++;
        priority_queue<ll>q;
        for(int i=0;i<26;i++)
            if(dem[i]!=0) q.push(dem[i]);
        while(k--&&!q.empty()){
            ll x=q.top(); q.pop();
            x-=1;
            q.push(x);
        }
        ll res=0;
        while(!q.empty()){
            ll x=q.top(); q.pop();
            res+=x*x;
        }
        cout<<res<<endl;
    }
    return 0;
}
