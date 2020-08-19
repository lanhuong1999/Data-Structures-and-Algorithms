#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        bool c=false;
        int n; cin>>n;
        for(int i=0;i<=n;i+=4){
            if((n-i)%7==0){
                for(int j=0;j<i/4;j++) cout<<4;
                for(int j=0;j<(n-i)/7;j++) cout<<7;
                c=true;
                break;
            }
        }
        if(!c) cout<<-1;
        cout<<endl;
    }
    return 0;
}
