#include <bits/stdc++.h>
#define maxn 105
using namespace std;
string a;
int n,c[maxn][maxn];
void solve(){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=max(c[i-1][j],c[i][j-1]);
            if(a[i]==a[j]&&i!=j) c[i][j]=c[i-1][j-1]+1;
        }
    }
    cout<<c[n][n]<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(c,0,sizeof(c));
        cin>>n;
        cin>>a;
        a=' '+a;
        solve();
    }
    return 0;
}
