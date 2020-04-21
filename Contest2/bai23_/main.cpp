#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,a[maxn][maxn],vs[maxn][maxn];
int dx[4]={0,-1,1,0};
int dy[4]={1,0,0,-1};
char c[4]={'D','L','R','U'};
int kt;
string res;
void init(){
    res="";
    kt=0;
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++){
            a[i][j]=0;
            vs[i][j]=0;
        }
}
void solve(int i, int j, int t){
    for(int k=0;k<4;k++){
        int col=i+dx[k];
        int row=j+dy[k];
        if(a[row][col]==1&&vs[row][col]==0){
            res[t++]=c[k];
            if(row==n && col==n){
                kt=1;
                for(int i=0;i<t;i++) cout<<res[i];
                cout<<" ";
                continue;
            }
            vs[row][col]=1;
            solve(col,row,t);
            vs[row][col]=0;
            --t;
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        init();
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) cin>>a[i][j];
        if(a[1][1]!=0&&a[n][n]!=0){
            vs[1][1]=1;
            solve(1,1,0);
        }
        if(!kt) cout<<-1;
        cout<<endl;
    }
    return 0;
}
