#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k,a[maxn];
        int res=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) res++;
        }
        if(res==0) cout<<-1;
        else cout<<res;
        cout<<endl;

    }
    return 0;
}
