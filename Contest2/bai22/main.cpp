#include <bits/stdc++.h>
#define maxn 20
using namespace std;
int n,a[maxn][maxn];
string res;
bool c;
void solve(int i,int j){
    if(i==n&&j==n){
        cout<<res<<" ";
        c=true;
    }
    if(a[i+1][j]==1){
        res+="D";
        solve(i+1,j);
    }
    if(a[i][j+1]==1){
        res+="R";
        solve(i,j+1);
    }
    if(res.size()!=0)res.erase(res.length()-1);
}
int main()
{
    int t;cin>>t;
    while(t--){
        res=""; c=false;
        for(int i=1;i<=n+1;i++)
            for(int j=1;j<=n+1;j++) a[i][j]=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        if(a[1][1]==1) solve(1,1);
        if(!c) cout<<-1;
        cout<<endl;

    }
    return 0;
}
