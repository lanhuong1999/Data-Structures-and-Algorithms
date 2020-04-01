#include<bits/stdc++.h>
using namespace std;
int res[20][20];
int n,k,c[20][20],a[20],dem;
bool check(){
    int t=0;
    for(int i=1;i<=n;i++)
        t+=c[i][a[i]];
    if(t==k) return true;
    return false;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        a[i]=i;
        for(int j=1;j<=n;j++)
            cin>>c[i][j];
    }
    do{
        if(check()){
            for(int i=1;i<=n;i++)
                res[dem][i]=a[i];
            dem++;
        }
    }while(next_permutation(a+1,a+n+1));

    cout<<dem<<endl;
    for(int i=0;i<dem;i++){
        for(int j=1;j<=n;j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
