#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        queue<int>q;
        q.push(9);
        while(1){
            int d=q.front(); q.pop();
            if(d%n==0){
                cout<<d; break;
            }
            else{
                q.push(d*10+0);
                q.push(d*10+9);
            }
        }
        cout<<endl;
    }
    return 0;
}
