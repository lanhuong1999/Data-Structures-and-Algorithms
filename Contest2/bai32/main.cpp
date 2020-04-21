#include <bits/stdc++.h>

using namespace std;
int ktra(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            st.push(s[i]);
        if(s[i]==')'){
            if(st.empty()||st.top()!='('){
                return 0;
            }
            st.pop();
        }
    }
    return 1;
}
int main()
{
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<ktra(s);
    }
    return 0;
}
