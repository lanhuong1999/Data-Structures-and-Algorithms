#include <bits/stdc++.h>

using namespace std;
int n,a[100000];
int tim(){
    int i;
    bool c=true;
    for(i=0;i<n-1&&c;i++){
        for(int j=i+1;j<n&&c;j++)
            if(a[j]==a[i]) c=false;
    }
    return i-1;
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int vt=tim();
        if(vt==n-2) cout<<"NO"<<endl;
        else cout<<a[vt]<<endl;

    }
    return 0;
}
