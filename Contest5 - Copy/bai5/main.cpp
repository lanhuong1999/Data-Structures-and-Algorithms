#include <bits/stdc++.h>
#define maxn 1005
const long long mod=1e9+7;
using namespace std;
int c[maxn][maxn];
void init(){
    for(int i=0;i<maxn;i++){
        for(int j=0;j<=i;j++)
            if(j==0||i==j) c[i][j]=1;
            else c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
    }
}
int main()
{
    init();
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<c[n][k]<<endl;
    }
    return 0;
}
