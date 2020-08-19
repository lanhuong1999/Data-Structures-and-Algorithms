#include <bits/stdc++.h>

using namespace std;
void solve(string s){
    int res=0,d=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') d++;
        else d--;
        if(d<0){
            res++;
            d+=2;
        }
    }
    res+=(d/2);
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        solve(s);
    }
    return 0;
}
