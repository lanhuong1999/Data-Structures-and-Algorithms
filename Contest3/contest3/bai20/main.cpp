#include <bits/stdc++.h>

using namespace std;
long long solve(string s){
    vector<int>v;
    for(int i=0;i<s.length();i++)
        if(s[i]=='[') v.push_back(i);
   int dem=0,p=0;
   long long res=0;
   for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            ++dem; ++p;
        }
        else if(s[i]==']') --dem;
        if(dem<0){
            swap(s[i],s[v[p]]);
            res+=v[p]-i;
            ++p; dem=1;
        }
   }
   return res;

}
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;

    }
    return 0;
}
