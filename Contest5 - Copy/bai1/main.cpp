#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
string a,b;
int n,m,c[maxn][maxn];
void solve(){
    for(int i=1;i<=n;i++) c[i][0]=0;
    for(int i=1;i<=m;i++) c[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            c[i][j]=max(c[i-1][j],c[i][j-1]);
            if(a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
        }
    }
    cout<<c[n][m]<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(c,0,sizeof(c));
        cin>>a>>b;
        n=a.length(); m=b.length();
        a=' '+a; b=' '+b;
        solve();
    }
    return 0;
}
