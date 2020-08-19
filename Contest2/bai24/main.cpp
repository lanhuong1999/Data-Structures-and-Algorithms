#include <bits/stdc++.h>
#define maxn 15
using namespace std;
int n,k,a[maxn],b[maxn],kt;
void ktra(){
    int t=0;
    for(int i=1;i<=n;i++) t+=a[i]*b[i];
    if(t==k){
        kt=1;
        int c[maxn],dem=1;
        for(int i=1;i<=n;i++)
            if(b[i]) c[dem++]=a[i];
        cout<<"[";
        for(int i=1;i<dem-1;i++) cout<<c[i]<<" ";
        cout<<c[dem-1]<<"] ";
    }
}
void solve(int i ){
    for(int j=1;j>=0;j--){
        b[i]=j;
        if(i==n) ktra();
        else solve(i+1);
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        kt=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        solve(1);
        if(!kt) cout<<-1;
        cout<<endl;
    }
    return 0;
}
