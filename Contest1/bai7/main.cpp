#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,m;
struct matrix{
    int m[maxn][maxn];
};
matrix operator*(matrix a,matrix b){
    matrix c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.m[i][j]=0;
            for(int k=0;k<m;k++){
                c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j]));
            }
        }
    }
    return c;
}

int main()
{
    int t;cin>>t;
    while(t--){
        matrix a;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin>>a.m[i][j];
        matrix b;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) b.m[i][j]=a.m[j][i];

        matrix res=a*b);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<res.m[i][j]<<" ";
            cout<<endl;

        }
    }
    return 0;
}
