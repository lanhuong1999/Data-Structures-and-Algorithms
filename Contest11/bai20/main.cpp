#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            a.push_back(x);
        }
        int check=1;
        map<int,bool>m;
        m[a[0]]=true;
        for(int i=1;i<a.size();i++){
            if(m[a[i]]||a[i]<a[i-1]){
                check=0; break;
            }
            m[a[i]]=true;
        }
        cout<<check<<endl;
    }
    return 0;
}
