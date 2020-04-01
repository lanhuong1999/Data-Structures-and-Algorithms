#include <iostream>

using namespace std;
int n,s,t[50];
int res=999999;
void solve(int i, int sum, int soTo){
    if(sum>s||soTo>res) return;
    if(i==n){
        if(sum==s) res=min(res,soTo);
        return;
    }
    solve(i+1,sum,soTo);
    solve(i+1,sum+t[i],soTo+1);
}
int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++) cin>>t[i];
    solve(0,0,0);
    if(res==999999) cout<<-1;
    else cout<<res;
    cout<<endl;
    return 0;
}
