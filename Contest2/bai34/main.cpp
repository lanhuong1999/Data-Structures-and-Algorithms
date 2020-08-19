#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,column[10],xuoi[maxn],nguoc[maxn];
int a[10][10],res,temp;
void solve(int row){
    for(int i=1;i<=n;i++){
        if(column[i]&&xuoi[i-row]&&nguoc[i+row]){
            column[i]=0;
            xuoi[i-row]=0;
            nguoc[i+row]=0;
            temp+=a[row][i];
            if(row==n)
                res=max(res,temp);
            else solve(row+1);
            column[i]=1;
            xuoi[i-row]=1;
            nguoc[i+row]=1;
            temp-=a[row][i];
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        n=8; res=0,temp=0;
        for(int i=1;i<=n;i++) column[i]=1;
        for(int i=-n;i<=n;i++) xuoi[i]=1;
        for(int i=1;i<=2*n;i++) nguoc[i]=1;

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) cin>>a[i][j];
        solve(1);
        cout<<res<<endl;
    }
    return 0;
}
