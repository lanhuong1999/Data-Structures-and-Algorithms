#include <bits/stdc++.h>
typedef long long ll;
const int maxn = 1e4+5;
using namespace std;
long long f[maxn];
void init(){
    memset(f,0,sizeof(f));
    f[1]=1;
    int a=1,b=1,c=1;
    for(int i=2;i<=10000;i++){
        ll ans2=f[a]*2;
        ll ans3=f[b]*3;
        ll ans5=f[c]*5;
        ll ans=min(ans2,min(ans3,ans5));
        f[i]=ans;
        if(ans==ans2) a++;
        if(ans==ans3) b++;
        if(ans==ans5) c++;
    }
}
int main()
{
    init();
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<f[n]<<endl;
    }
    return 0;
}
