#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        int m=s/9;
        int res[1001];
        memset(res,0,sizeof(res));
        if(d*9<s) cout<<-1<<endl;
        else{
            int i=d;
            for(i=d;i>(d-m);i--)
                res[i]=9;
            res[i]=s-(m*9);
            if(res[1]==0){
                if(res[i]!=0) res[i]-=1;
                else res[i+1]-=1;
                res[1]=1;
            }
            for(int i=1;i<=d;i++) cout<<res[i];
            cout<<endl;
        }
    }
    return 0;
}
