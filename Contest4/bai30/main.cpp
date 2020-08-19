#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;
struct matrix{
    long long m[2][2];
};
matrix operator*(matrix a, matrix b){
    matrix c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c.m[i][j]=0;
            for(int k=0;k<2;k++){
                c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j])%mod)%mod;
            }
        }
    }
    return c;
}
matrix expMatrix(matrix a, int n){
    if(n==1) return a;
    matrix x=expMatrix(a,n/2);
    if(n%2) return x*x*a;
    return x*x;
}
int main()
{
    matrix a;
    a.m[0][0]=0; a.m[0][1]=1;
    a.m[1][0]=1; a.m[1][1]=1;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        matrix b=expMatrix(a,n-1);
        cout<<b.m[1][1]<<endl;

    }
    return 0;
}
