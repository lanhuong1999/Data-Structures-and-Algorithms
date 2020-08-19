#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            if(!st.empty()){
                int index=st.top(); st.pop();
                if(index==0) continue;
                if(s[index-1]=='-'){
                    for(int j=index;j<=i;j++){
                        if(s[j]=='-') s[j]='+';
                        else if(s[j]=='+') s[j]='-';
                    }
                }
            }
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]==')') continue;
        cout<<s[i];
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        solve(s);
    }
    return 0;
}
