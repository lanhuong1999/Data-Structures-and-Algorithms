#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<int>st;
        int n=s.length();
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(i==n||s[i]=='I')
                while(!st.empty()){
                    cout<<st.top(); st.pop();
                }
        }
        cout<<endl;
    }
    return 0;
}
