#include <bits/stdc++.h>
using namespace std;
int c[10];
int main()
{
    int t; cin>>t;
    while(t--){
        memset(c,-1,sizeof(c));
        int n; cin>>n;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            for(int j=0;j<a.length();j++)
                c[a[j]-'0']=1;
        }
        for(int i=0;i<10;i++)
            if(c[i]!=-1) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
