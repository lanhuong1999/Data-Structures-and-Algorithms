#include <bits/stdc++.h>
#define maxn 105
using namespace std;
struct dathuc{
    int d[maxn];
};
dathuc muldt(dathuc a,int m, dathuc b, int n){
    dathuc res;
    int sum=m+n;
    for(int i=0;i<sum;i++) res.d[i]=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            res.d[i+j]+=a.d[i]*b.d[j];
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        dathuc a,b;
        int m,n;
        cin>>m>>n;
        for(int i=0;i<m;i++) cin>>a.d[i];
        for(int i=0;i<n;i++) cin>>b.d[i];
        dathuc res=muldt(a,m,b,n);
        for(int i=0;i<m+n-1;i++) cout<<res.d[i]<<" ";
        cout<<endl;
    }
}
