#include<bits/stdc++.h>

using namespace std;
unordered_map <string,int> msi;
void solve(int n, string a, string b){
    int i;
    msi.clear();
    unordered_set<string>s;
    for(int i=0;i<n;i++){
        string t; cin>>t;
        s.insert(t);
        msi[t]=0;
    }
    msi[a]=1;
    queue<string>q;
    q.push(a);
    string s1,s2;
    while(!q.empty()){
        s1=q.front(); q.pop();
        if(s1==b){
            cout<<msi[s1]<<endl;
            return;
        }
        for(int i=0;i<s1.length();i++){
            for(char c='A';c<='Z';c++){
                s2=s1;
                s2[i]=c;
                if(s.find(s2)!=s.end()&&msi[s2]==0){
                    msi[s2]=msi[s1]+1;
                    q.push(s2);
                }
            }
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string a,b;
        cin>>a>>b;
        solve(n,a,b);
    }
    return 0;
}
