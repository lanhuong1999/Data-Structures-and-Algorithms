#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        vector< pair<int,int> >p;
        int V,E;
        cin>>V>>E;
        p.resize(E+1);
        for(int i=1;i<=E;i++){
            cin>>p[i].first>>p[i].second;
        }
        for(int i=1;i<=V;i++){
            cout<<i<<": ";
            for(int j=1;j<=E;j++){
                if(p[j].first==i)
                    cout<<p[j].second<<" ";
                if(p[j].second==i)
                    cout<<p[j].first<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
