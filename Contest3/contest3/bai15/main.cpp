#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int N,S,M;
        cin>>N>>S>>M;
        int sum=S*M;
        int res=0;
        if(sum>(S-S/7)*N) res=-1;
        else{
            if(sum%N) res=(sum/N)+1;
            else res=sum/N;
        }
        cout<<res<<endl;
    }
    return 0;
}
