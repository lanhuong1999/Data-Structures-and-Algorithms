#include <bits/stdc++.h>
#define maxn 25
using namespace std;
int n,k,s,res,a[maxn];
void ktra(){
    int t=0;
    for(int i=1;i<=k;i++) t+=a[i];
    if(t==s) res++;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) ktra();
        else Try(i+1);
    }
}
int main()
{

    while(true){
        res=0;
        cin>>n>>k>>s;
        if(n==0&&k==0&&s==0) break;
        Try(1);
        cout<<res<<endl;
    }
    return 0;
}
