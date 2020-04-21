#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,column[maxn],xuoi[maxn],nguoc[maxn];
int res;
void solve(int row){
    for(int i=1;i<=n;i++){
        if(column[i]&&xuoi[i-row]&&nguoc[i+row]){
            column[i]=0;
            xuoi[i-row]=0;
            nguoc[i+row]=0;
            if(row==n) ++res;
            else solve(row+1);
            column[i]=1;
            xuoi[i-row]=1;
            nguoc[i+row]=1;
        }
    }
}
int main()
{
    res=0; cin>>n;
    for(int i=1;i<=n;i++) column[i]=1;
    for(int i=-n;i<=n;i++) xuoi[i]=1;
    for(int i=1;i<=2*n;i++) nguoc[i]=1;
    solve(1);
    cout<<res<<endl;
    return 0;
}
