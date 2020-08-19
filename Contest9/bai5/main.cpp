#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        vector< pair<int,int> >p;
        int v,e;
        cin>>v>>e;
        p.resize(e+1);
        for(int i=1;i<=e;i++)
            cin>>p[i].first>>p[i].second;
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            for(int j=1;j<=e;j++)
                if(p[j].first==i) cout<<p[j].second<<" ";
            cout<<endl;
        }
    }
    return 0;
}
