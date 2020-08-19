#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<int>v;
        while(n!=0){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        int index=v.size();
        for(int i=0;i<v.size();i++)
            if(v[i]>=2){
                index=i; break;
            }
        for(int i=index;i<v.size();i++) v[i]=1;
        ll res=0,s=1;
        for(int i=v.size()-1;i>=0;i--){
            res+=v[i]*s;
            s*=2;
        }
        cout<<res<<endl;
    }
    return 0;
}
//200-->111= 7
