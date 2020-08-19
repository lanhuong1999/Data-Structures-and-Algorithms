#include <bits/stdc++.h>

using namespace std;
const long long mod=1e9+7;
int n,k;

struct matrix{
    long long m[20][20];
};
matrix operator*(matrix a, matrix b){
    matrix c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.m[i][j]=0;
            for(int k=0;k<n;k++){
                c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j])%mod)%mod;
            }
        }
    }
    return c;
}
matrix expMatrix(matrix a, int k){
    if(k==1) return a;
    matrix res=expMatrix(a,k/2);
    matrix a2=res*res;
    if(k%2) return a2*a;
    else return a2;
}
int main()
{
    freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        matrix a;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) cin>>a.m[i][j];

        matrix res=expMatrix(a,k);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<res.m[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}