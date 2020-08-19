#include <bits/stdc++.h>
#define fi first
#define se second
#define ii pair<int,int>
#define mp make_pair
using namespace std;
string s;
vector<ii>v;
int n,t,x[15];
set<string>res;
void solve(){
    string s1="";
    for(int i=0;i<s.length();i++){
        bool c=true;
        for(int j=n-1;j>=0;j--){
            if(x[j]==1&&(v[j].fi==i||v[j].se==i)){
                c=false; break;
            }
        }
        if(c) s1+=s[i];
    }
    res.insert(s1);
}
void Try(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        t+=j;
        if(i==0){
            if(t>0) solve();
        }
        else Try(i-1);
        t-=j;
    }
}
int main()
{
    cin>>s;
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        if(!st.empty()&&s[i]==')'){
            v.push_back(mp(st.top(),i));
            st.pop();
        }
    }
    n=v.size();
    Try(n-1);
    set<string>::iterator it;
    for(it=res.begin();it!=res.end();it++)
        cout<<*it<<endl;
    return 0;
}
