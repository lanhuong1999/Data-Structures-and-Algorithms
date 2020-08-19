#include <bits/stdc++.h>

using namespace std;

bool solve(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%')
            st.push(s[i]);
        else if(s[i]==')'){
            if(st.empty()) return false;
            while(!st.empty()){
                char x=st.top(); st.pop();
                if(x=='(') return false;
                if((x=='+'||x=='-'||x=='*'||x=='/'||x=='%')&&st.top()=='('){
                        st.pop(); break;
                }
            }

        }
    }
    while(!st.empty()){
        if(st.top()=='(') break;
        st.pop();
    }
    if(st.empty()) return true;
    else return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(!solve(s)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}
