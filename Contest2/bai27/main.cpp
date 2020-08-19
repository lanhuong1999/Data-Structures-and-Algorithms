#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
int n,k,dem;
int a[maxn],vs[maxn];
bool c;
int sum;
void Try(int i,int t){
    for(int j=i;j<=n;j++){
        if(c) return;
        if(!vs[j]){
            t+=a[j];vs[j]=1;
            if(t==sum){
                dem++;
                if(dem==k){
                    c=true;
                    return;
                }
                int m=1; while(vs[m])m++;
                Try(m,0);
                dem--;
            }
            if(t<sum) Try(j+1,t);
            t-=a[j];
            vs[j]=0;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(vs,0,sizeof(vs));
        dem=0;
        int s=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i]; s+=a[i];
        }
        sort(a+1,a+1+n);
        sum=s/k;
        if(s%k) cout<<0;
        else{
            Try(1,0);
            if(c) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
