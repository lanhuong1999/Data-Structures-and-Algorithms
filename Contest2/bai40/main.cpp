#include <bits/stdc++.h>
#define maxn 20
using namespace std;
int c[maxn][maxn],vs[maxn],x[maxn];
int res,n,cmin,sum;
void Try(int i){
    for(int j=2;j<=n;j++){
        if(vs[j]){
            x[i]=j;
            sum+=c[x[i-1]][x[i]];
            vs[j]=0;
            if(i==n) res=min(res,sum+c[x[i]][1]);
            else if(sum+(n-i+1)*cmin<res)
                Try(i+1);
            sum-=c[x[i-1]][x[i]];
            vs[j]=1;
        }
    }
}
int main()
{
    cin>>n;
    cmin=res=999999;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
            cmin=min(cmin,c[i][j]);
    }
    for(int i=1;i<=n;i++) vs[i]=1;
    x[1]=1;
    Try(2);
    cout<<res;
    return 0;
}
