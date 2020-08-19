#include <bits/stdc++.h>

using namespace std;
int getPriority(char x){
    if(x=='(') return 0;
    else if(x=='+'||x=='-') return 1;
    else if(x=='*'||x=='/'||x=='%') return 2;
    else if(x=='^') return 3;
}
void solve(string a){
    string res="";
    stack<char>s;

    for(int i=0;i<a.length();i++){
        if('a'<=a[i]&& a[i]<='z')
            res+=a[i];
        else{
            if(a[i]=='(')
                s.push(a[i]);
            else if(a[i]==')'){
                char x=s.top();
                while(x!='('){
                    res+=x;
                    s.pop();
                    x=s.top();
                    if(x=='(') s.pop();
                }
            }
            else{
                while(!s.empty()&&getPriority(s.top())>=getPriority(a[i])){
                    res+=s.top();
                    s.pop();
                }
                s.push(a[i]);
            }
        }
    }
    while(!s.empty()){
        char x=s.top();
        if(x!='(') res+=x;
        s.pop();
    }
    cout<<res<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        string a;
        cin>>a;
        solve(a);
    }
    return 0;
}
