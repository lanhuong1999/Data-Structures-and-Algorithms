#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll calc(ll a, ll b, char c){
    if(c=='+') return b+a;
    else if(c=='-') return b-a;
    else if(c=='*') return b*a;
    else if(c=='/') return b/a;
    else if(c=='%') return b%a;
}
bool isOperator(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%')
        return true;
    return false;
}
ll solve(string s){
    stack<ll>st;
    for(int i=0;i<s.length();i++){
        if(isOperator(s[i])){
            ll a=st.top(); st.pop();
            ll b=st.top(); st.pop();
            ll c=calc(a,b,s[i]);
            st.push(c);
        }
        else st.push(s[i]-'0');
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
