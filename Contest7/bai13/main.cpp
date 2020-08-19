#include <bits/stdc++.h>

using namespace std;
bool isOperator(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='%')
        return true;
    return false;
}
string prefix_postfix(string s){
    stack<string>st;
    for(int i=s.length()-1;i>=0;i--){
        if(isOperator(s[i])){
            string a=st.top(); st.pop();
            string b=st.top(); st.pop();
            string c=a+b+s[i];
            st.push(c);
        }
        else st.push(string(1,s[i]));
    }
    return st.top();
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<prefix_postfix(s)<<endl;
    }
    return 0;
}
