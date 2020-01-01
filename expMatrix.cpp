#include<iostream>
using namespace std;
const long long mod=1e9+7;
int n,k;
struct Matrix{
    long long m[100][100];
}I;
Matrix multiply(Matrix a, Matrix b){
    Matrix c;
    for (int i = 0; i < n; i++)
    {
        for (int j  = 0; j < n; j++)
        {
            c.m[i][j]=0;
            for (int k  = 0; k < n; k++)
            {
                c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j])%mod)%mod;
            }
            
        }
        
    }
    return c;
}
Matrix expmt(Matrix a, int b){
    if(b==0) return I;
    if(b==1) return a;
    Matrix res=expmt(a,b/2);
    Matrix a2=multiply(res,res);
    if(b%2) return multiply(a2,a);
    return a2;
}
int main()
{
    freopen("input.txt","r",stdin);
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
            I.m[i][j]=0;
        I.m[i][i]=1;
        
    }
    int tc=0;
    cin>>tc;
    for (int  t= 1; t <=tc; t++)
    {
        Matrix a;
        cin>>n>>k;
        for (int i = 0; i <100; i++)
            for (int j = 0; j < 100; j++)
                a.m[i][j]=0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin>>a.m[i][j];

        
        a=expmt(a,k);
        cout<<"#Case"<<t<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout<<a.m[i][j]<<" ";
            cout<<endl;
        }
        

    }
    
}