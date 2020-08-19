#include <bits/stdc++.h>
#define maxn 30
using namespace std;
int n,m,res,a[maxn][maxn];
void timDuong(int i, int d){
    res=max(res,d);
    for(int j=0;j<n;j++){
        if(a[i][j]==1){
            a[i][j]=a[j][i]=0;
            timDuong(j,d+1);
            a[i][j]=a[j][i]=1;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        res=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) a[i][j]=0;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            a[x][y]=a[y][x]=1;
        }
        for(int i=0;i<n;i++) timDuong(i,0);
        cout<<res<<endl;
    }
    return 0;
}
