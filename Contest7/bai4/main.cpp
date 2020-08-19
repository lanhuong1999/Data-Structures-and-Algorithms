#include <bits/stdc++.h>

using namespace std;
void solve(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            st.push(s[i]);
        if(s[i]==')'){
            if(st.empty()||st.top()!='('){
                    cout<<"NO"; return;
            }
            st.pop();
        }
        else if(s[i]==']'){
            if(st.empty()||st.top()!='['){
                    cout<<"NO"; return;
            }
            st.pop();
        }
        else if(s[i]=='}'){
            if(st.empty()||st.top()!='{'){
                    cout<<"NO"; return;
            }
            st.pop();
        }
    }
    cout<<"YES";
}
int main()
{
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        solve(s);
        cout<<endl;
    }
    return 0;
}
