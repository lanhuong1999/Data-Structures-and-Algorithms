#include <bits/stdc++.h>

using namespace std;
int f[105][105];
int main()
{
    int t; cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        string a,b;
        cin>>a>>b;
        int n=a.length(), m=b.length();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0) f[i][j]=i+j;
                else if(a[i-1]==b[j-1]) f[i][j]=f[i-1][j-1];
                else f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
            }
        }
        cout<<f[n][m]<<endl;
    }
    return 0;
}
