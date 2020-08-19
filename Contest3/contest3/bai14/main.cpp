#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<string> v;
string toString(ll n){
    string res="";
    while(n!=0){
        res=(char)(n%10+'0')+res;
        n/=10;
    }
    return res;
}
vector<string> initCube(ll n){
    vector<string>v;
    n=10000000;
    for(int i=1;i*i*i<n;i++){
        ll a=i*i*i;
        v.push_back(toString(a));
    }
    return v;
}
string solve(ll n){
    string s=toString(n);
    for(int i=v.size()-1;i>=0;i--){
        string c=v[i];
        int index=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==c[index]) index++;
        }
        if(index==c.size()) return c;
    }
    return "-1";
}
int main()
{
    int t;cin>>t;
    v=initCube(10000000);
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
