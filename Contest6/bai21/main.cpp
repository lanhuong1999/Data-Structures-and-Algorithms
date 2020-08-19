#include <bits/stdc++.h>
#define maxn 10005
using namespace std;
pair<int,int>p[maxn];
int a[100000];
bool cmp(pair<int,int> x, pair<int,int> y){
    if(x.second==y.second) return x.first<y.first;
    return x.second>y.second;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            int x; cin>>x;
            a[x]++;
        }
        int dem=0;
        for(int i=0;i<=100000;i++)
            if(a[i]!=0){
                p[dem].first=i,p[dem].second=a[i];
                dem++;
            }
        sort(p,p+dem,cmp);
        for(int i=0;i<dem;i++){
            for(int j=0;j<p[i].second;j++)
                cout<<p[i].first<<" ";
        }
        cout<<endl;
    }
    return 0;
}
