#include <bits/stdc++.h>

using namespace std;
stack<int>s;
int main()
{
    int t; cin>>t;
    while(t--){
        string mode; cin>>mode;
        if(mode=="PUSH"){
            int x; cin>>x;
            s.push(x);
        }
        if(mode=="PRINT"){
            if(s.empty()) cout<<"NONE"<<endl;
            else cout<<s.top()<<endl;
        }
        if(mode=="POP"){
            if(!s.empty()) s.pop();
        }
    }
    return 0;
}
