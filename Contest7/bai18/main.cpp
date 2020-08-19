#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int getPriority(char x){
    if(x=='(') return 0;
    else if(x=='+'||x=='-') return 1;
    else if(x=='*'||x=='/'||x=='%') return 2;
    else if(x=='^') return 3;
}
ll calc(ll a, ll b, char c){
    if(c=='+') return b+a;
    else if(c=='-') return b-a;
    else if(c=='*') return b*a;
    else if(c=='/') return b/a;
    else if(c=='%') return b%a;
}
ll solve(string s){
    stack<ll>th;
    stack<char>tt;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            ll a=0;
            while(isdigit(s[i])){
                a=a*10+(s[i]-'0');
                i++;
            }
            i-=1;
            th.push(a);
        }
        else if(s[i]=='('){
            tt.push(s[i]);
        }
        else if(s[i]==')'){
            char x=tt.top();
            while(x!='('){
                ll a=th.top(); th.pop();
                ll b=th.top(); th.pop();
                ll c=calc(a,b,x);
                th.push(c);
                tt.pop();
                x=tt.top();
                if(x=='(') tt.pop();
            }
        }
        else{
            while(!tt.empty()&&(getPriority(tt.top())>=getPriority(s[i]))){
                char x=tt.top(); tt.pop();
                ll a=th.top(); th.pop();
                ll b=th.top(); th.pop();
                ll c=calc(a,b,x);
                th.push(c);
            }
            tt.push(s[i]);
        }
    }
    while(!tt.empty()){
        char x=tt.top(); tt.pop();
        ll a=th.top(); th.pop();
        ll b=th.top(); th.pop();
        ll c=calc(a,b,x);
        th.push(c);
    }
    return th.top();
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
