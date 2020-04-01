#include <bits/stdc++.h>

using namespace std;
char a[20],kq[400][20];
int res,n,k;
void inkq(){
    cout<<res<<endl;
    for(int i=1;i<=res;i++){
        for(int j=1;j<=n;j++)
            cout<<kq[i][j];
        cout<<endl;
    }
}
int check(){
    int demA=0,counter=0;
    for(int i=1;i<=n;i++){
        if(a[i]=='A') ++demA;
        else{
            if(demA==k) ++counter;
            demA=0;
        }
    }
    if(demA==k) ++counter;
    return counter;
}
void xnp(int m){
    if(m>n){
        if(check()==1){
            ++res;
            for(int i=1;i<=n;i++)
                kq[res][i]=a[i];
        }
        return;
    }
    for(int i='A';i<='B';i++){
        a[m]=i;
        xnp(m+1);
    }
}
int main()
{

    cin>>n>>k;
    xnp(1);
    inkq();
    return 0;
}
