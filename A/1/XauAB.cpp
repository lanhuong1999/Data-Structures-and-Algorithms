#include<bits/stdc++.h>
using namespace std;
int n,k;
bool ktra(int x){
    int dem=0;
    while(x!=0){
        if(x%2==0){
            dem++;
            if(dem==k) return true;
        }
        else{
            dem=0;
        }
        x=x>>1;
    }
    return false;
}
void output(int x,int n){
    for(int i=n-1;i>=0;i--){
        if((x>>i)&1) cout<<"1";
        else cout<<"0";
    }
}
int main()
{
    int dem=0;

    cin>>n>>k;
    for (int i = 0; i < (1<<n); i++)
    {
        if(ktra(i)){
            dem++;
        }
    }
    cout<<dem<<endl;
    for (int i = 0; i < (1<<n); i++)
    {
        if(ktra(i)){
            output(i,n);
            cout<<endl;
        }
    }

    return 0;
}