#include<bits/stdc++.h>
using namespace std;
int count(int x){
    int dem=0;
    while(x!=0){
        if(x%2==1) dem++;
        x=x>>1;
    }
    return dem;
}
void inxau(int x,int n){
    for (int i=n-1;i>=0;i--)
    {
        if((x>>i)&1) cout<<"1";
        else cout<<"0";

    }
    
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t-->0){
        cin>>n>>k;
        for (int i = 0; i < (1LL<<n); i++)
        {
            if(count(i)==k){
                inxau(i,n);
                cout<<endl;
            }
        }
        
    }
    return 0;
}