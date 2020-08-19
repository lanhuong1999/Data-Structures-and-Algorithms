#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll calc(ll a, ll b, char c){
    if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else if(c=='*') return a*b;
    else if(c=='/') return a/b;
    else if(c=='%') return a%b;
}
ll solve(string s){
    stack<ll>st;
    for(int i=s.length()-1;i>=0;i--){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            ll a=st.top(); st.pop();
            ll b=st.top(); st.pop();
            ll c=calc(a,b,s[i]);
            st.push(c);
        }
    }
    return st.top();
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
