#include <bits/stdc++.h>

using namespace std;
int n,k;
int a[1000];
void solve(){
    int i=k;
    while(a[i]==n-k+i) --i;
    if(i==0){
        for(int j=1;j<=k;j++) cout<<j<<" ";
        cout<<endl;
        return;
    }
    else{
        a[i]+=1;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
        for(int j=1;j<=k;j++)cout<<a[j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];
        solve();
    }
    return 0;
}
