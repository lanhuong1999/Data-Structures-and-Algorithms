#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int toNum(char c){
    return c-'0';
}
ll solve(string s){
    int n=s.length(),i;
    ll f[15],res=0;
    f[0]=toNum(s[0]);
    res=f[0];
    for(i=1;i<n;i++){
        ll t=toNum(s[i]);
        f[i]=f[i-1]*10+t*(i+1);
        res=res+f[i];
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
