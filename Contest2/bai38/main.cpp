#include <bits/stdc++.h>

using namespace std;
int p[]={1,2,3,5,7,11,13,17,19,23};
int n,c[1005];
long long res;
void solve(int i, long long t){
    for(int j=1;j<=min(n-1,c[i-1]);j++){
        t*=p[i];
        if(t>=res && res!=-1) break;
        if(n%(j+1)==0){
            c[i]=j;
            n/=(j+1);
            if(n==1) res=t;
            else solve(i+1,t);
            n*=(j+1);
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        res=-1;
        memset(c,0,sizeof(c));
        c[0]=n-1;
        if(n>1) solve(1,1);
        else res=1;
        cout<<res<<endl;
    }
    return 0;
}
