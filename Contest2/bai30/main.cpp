#include <bits/stdc++.h>
#define maxn 200
using namespace std;
int N,P,S;
int dem,p[maxn],a[maxn];
vector< vector<int> >res;
int ktraP(int x){
    if(x==2) return 1;
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return 0;
    }
    return 1;
}
void init(){
    dem=1;
    for(int i=P;i<=S;i++)
        if(ktraP(i))
            p[dem++]=i;
    --dem;
}
void ktra(){
    int t=0;
    for(int i=1;i<=N;i++) t+=p[a[i]];
    if(t==S){
        vector<int> v;
        for(int i=1;i<=N;i++) v.push_back(p[a[i]]);
        res.push_back(v);
    }
}
void Try(int i){
    for(int j=a[i-1]+1;j<=dem-N+i;j++){
        a[i]=j;
        if(i==N)ktra();
        else Try(i+1);
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(p,0,sizeof(p));
        res.clear();
        cin>>N>>P>>S;
        init();
        Try(1);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++) cout<<res[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
