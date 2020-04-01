#include <bits/stdc++.h>
#define maxn 10
using namespace std;
long long a[maxn][maxn], f[maxn*maxn];
int n,row,col,counter,index;
void initFibo(){
    f[0]=0; f[1]=1;
    int d=2;
    while(d<=n*n){
        f[d]=f[d-2]+f[d-1];
        d++;
    }
}
void initMatrix(){
    row=col=n-1;counter=0;index=1;
    while(counter<=n/2){
        for(int i=counter;i<=col;i++) a[counter][i]=f[index++];
        for(int i=counter+1;i<=row;i++) a[i][col]=f[index++];
        for(int i=col-1;i>=counter;i--) a[row][i]=f[index++];
        for(int i=row-1;i>counter;i--) a[i][counter]=f[index++];
        row--; col--; counter++;
    }
}
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;

        initFibo();
        for(int i=1;i<=n*n;i++) cout<<f[i]<<" ";
        cout<<endl;
        initMatrix();
        cout<<"Test "<<i<<":\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }

    }
    return 0;
}
