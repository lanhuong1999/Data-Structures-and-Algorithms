#include <bits/stdc++.h>
#define maxn 20
using namespace std;

int n,row,col,counter,value,a[maxn][maxn];

void initMatrix(){
    row=col=n-1; counter=0; value=n*n;
    while(counter<=n/2){
        for(int i=counter;i<=col;i++) a[counter][i]=value--;
        for(int i=counter+1;i<=row;i++) a[i][col]=value--;
        for(int i=col-1;i>=counter;i--) a[row][i]=value--;
        for(int i=row-1;i>counter;i--) a[i][counter]=value--;
        counter++;row--;col--;
    }
}

int main()
{
    int t; cin>>t;
    while(t--){
    cin>>n;
        initMatrix();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
