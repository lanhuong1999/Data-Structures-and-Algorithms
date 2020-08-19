#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int n,v;
int a[maxn],c[maxn];
int maxc[maxn][maxn];
int solve(){
    for(int i=0;i<=v;i++) maxc[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int l=1;l<=v;l++){
            maxc[i][l]=maxc[i-1][l];
            if(a[i]<=l&&maxc[i-1][l-a[i]]+c[i]>maxc[i-1][l])
                maxc[i][l]=maxc[i-1][l-a[i]]+c[i];
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(maxc,0,sizeof(maxc));
        cin>>n>>v;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>c[i];
        solve();
        cout<<maxc[n][v]<<endl;
    }
    return 0;
}
