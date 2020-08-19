#include <bits/stdc++.h>
using namespace std;
vector<int>a1[1005];
vector<int>a2[1005];
int n,m;
int main()
{
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++)
            a1[i].clear(), a2[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int b,c; cin>>b>>c;
            a1[b].push_back(c);
            a2[c].push_back(b);
        }
        int d=0;
        for(int i=1;i<=n;i++)
            if(a1[i].size()==a2[i].size()) d++;
        if(d==n) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
