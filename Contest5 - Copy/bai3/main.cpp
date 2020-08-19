#include <bits/stdc++.h>
#define maxn 205
#define maxm 50000
using namespace std;
int l[maxm];
int main()
{
    int t; cin>>t;
    while(t--){
        int n,s,a[maxn];
        cin>>n>>s;
        for(int i=1;i<=n;i++) cin>>a[i];
        memset(l,0,sizeof(l));
        l[0]=1;
        for(int i=1;i<=n;i++){
            for(int t=s;t>=a[i];t--)
                if(l[t]==0&&l[t-a[i]]==1) l[t]=1;
        }
        if(l[s]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
