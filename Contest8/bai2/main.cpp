#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int>q;
    int n; cin>>n;
    while(n--){
    string s; cin>>s;
        if(s=="PUSH"){
            int x; cin>>x;
            q.push(x);
        }
        else if(s=="PRINTFRONT"){
            if(q.empty()) cout<<"NONE\n";
            else cout<<q.front()<<endl;
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}
