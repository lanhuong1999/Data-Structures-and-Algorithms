#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a;
    vector<int>res;
    for(int i=1;i<=n;i++){
        res.clear();
        for(int j=1;j<=n;j++){
            cin>>a;
            if(a==1) res.push_back(j);
        }
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }

    return 0;
}
