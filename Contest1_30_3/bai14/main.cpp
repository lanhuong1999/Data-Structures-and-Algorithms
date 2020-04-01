#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,k,a[maxn],b[maxn],res;
void thkt(){
    int i=k;
    res=k;
    while(a[i]==n-k+i)--i;
    if(i==0) return;
    a[i]+=1;
    for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;

    for(int i=1;i<=k;i++)
        for(int j=1;j<=k;j++)
            if(a[i]==b[j]) --res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        thkt();
        cout<<res<<endl;
    }
    return 0;
}
