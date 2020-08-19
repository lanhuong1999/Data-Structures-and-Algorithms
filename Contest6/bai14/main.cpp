#include <bits/stdc++.h>
const int maxn=1e6+5;
bool snt[maxn];
using namespace std;
void init_snt(){
    memset(snt,true,sizeof(snt));
    snt[0]=snt[1]=false;
    for(long long i=2;i<=1000000;i++)
        if(snt[i])
            for(long long j=2*i;j<=1000000;j+=i)
                snt[j]=false;
}
int main()
{
    init_snt();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool c=false;
        for(long long i=2;i<=n;i++){
            if(snt[i]&&snt[n-i]){
                cout<<i<<" "<<n-i<<endl;
                c=true;
                break;
            }
        }
        if(!c) cout<<-1<<endl;
    }
    return 0;
}
