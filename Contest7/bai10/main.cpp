#include <bits/stdc++.h>
#define maxn 26
using namespace std;
bool checkSign(string s, int i){
    if(i==0) return true;
    if(s[i-1]=='-') return false;
    return true;
}
void solve(string s,vector<int>&v,bool add){
    stack<bool>st;
    st.push(true);
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'||s[i]=='-') continue;
        if(s[i]=='('){
            if(checkSign(s,i)) st.push(st.top());
            else st.push(!st.top());
        }
        else if(s[i]==')') st.pop();
        else{
            if(st.top())
                v[s[i]-'a']+=(checkSign(s,i)? add? 1 : -1 :
                                             add? -1 : 1);
            else
                v[s[i]-'a']+=(checkSign(s,i)? add? -1 : 1 :
                                              add? 1 : -1);
        }
    }

}
bool areSame(string s1, string s2){
    vector<int>v(maxn,0);
    solve(s1,v,true);
    solve(s2,v,false);
    for(int i=0;i<maxn;i++)
        if(v[i]!=0) return false;
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(areSame(s1,s2)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
