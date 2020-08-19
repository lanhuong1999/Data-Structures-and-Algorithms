#include <bits/stdc++.h>
#define maxn 105
using namespace std;
int k,m,n;
string dic[maxn];
char a[5][5];
int vs[5][5];
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};
int kt;
void init(){
    kt=0;
    for(int i=0;i<105;i++){
        dic[i]="";
    }
    for(int i=0;i<5;i++)
        memset(a[i],' ',sizeof(a[i]));
}
void input(){
    cin>>k>>m>>n;
    for(int i=0;i<k;i++)cin>>dic[i];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
}
void ktra(string s){
    for(int i=0;i<k;i++)
        if(s.compare(dic[i])==0){
            cout<<s<<" ";
            kt=1;
        }
}
void solve(int row, int col, string &s){
    s+=a[row][col];
    vs[row][col]=1;
    ktra(s);
    for(int i=0;i<8;i++){
        int x=row+dy[i];
        int y=col+dx[i];
        if(x<m&&x>=0&&y<n&&y>=0&&!vs[x][y]){
            solve(x,y,s);
            vs[x][y]=0;
            s.erase(s.length()-1);
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        init();
        input();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                string s="";
                for(int i=0;i<5;i++)
                    memset(vs[i],0,sizeof(vs[i]));
                solve(i,j,s);
            }
        }
        if(!kt) cout<<-1;
        cout<<endl;
    }
    return 0;
}
