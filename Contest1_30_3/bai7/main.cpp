#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,k,a[maxn],stop;
void inkq(){
    cout<<"(";
    for(int i=1;i<=k;i++){
        cout<<a[i];
        if(i!=k) cout<<" ";
    }
    cout<<") ";
}
void solve(){
    int i=k,j,r,s,d;
    while(i>0&&a[i]==1) --i;
    if(i>0){
        a[i]=a[i]-1; d=k-i+1;
        r=d/a[i]; s=d%a[i];
        k=i;
        if(r>0){
            for(int j=i+1;j<=i+r;j++) a[j]=a[i];
            k+=r;
        }
        if(s>0){
            k+=1; a[k]=s;
        }
    }
    else stop=1;
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        memset(a,0,sizeof(a));
        k=1;a[k]=n;stop=0;
        while(!stop){
            inkq();
            solve();
        }
        cout<<endl;
    }
    return 0;
}
