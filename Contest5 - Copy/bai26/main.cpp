#include <bits/stdc++.h>
#define maxn 105
#define maxc 25005
using namespace std;
int c,n,f[maxn][maxc];
int a[maxn];
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=c;j>=1;j--){
            f[i][j]=f[i-1][j];
            if(a[i]<=j&&f[i-1][j-a[i]]+a[i]>f[i-1][j])
                f[i][j]=f[i-1][j-a[i]]+a[i];
        }
    }
}
int main()
{
    cin>>c>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    solve();
    cout<<f[n][c];
    return 0;
}
