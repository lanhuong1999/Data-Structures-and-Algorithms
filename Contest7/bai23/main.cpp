#include <bits/stdc++.h>

using namespace std;
int stringToNum(string s){
    int res=0;
    for(int i=0;i<s.length();i++)
        res=res*10+(s[i]-'0');
    return res;
}
//def[b2[[ca]]]    defbca
void solve(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        if(s[i]==']'){
            string a="";
            while(!st.empty()&&st.top()!="["){
                a=st.top()+a;
                st.pop();
            }
            if(!st.empty()&&st.top()=="[")
                st.pop();
            string b="";
            while(!st.empty()&&"0"<=st.top()&&st.top()<="9"){
                b=st.top()+b;
                st.pop();
            }
            string c=a;
            int num=stringToNum(b);
            for(int j=0;j<num-1;j++)
                c+=a;
            st.push(c);
        }
        else st.push(string(1,s[i]));
    }
    string res="";
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        solve(s);
    }
    return 0;
}
