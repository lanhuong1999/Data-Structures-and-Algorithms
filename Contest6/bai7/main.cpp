#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,*a,*b;
        cin>>n;
        a=new int[n+1]; b=new int[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1,b+n+1);
        int start=0,endd=0;
        bool c=false;
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]&&!c){
                start=endd=i;
                c=true;
            }
            else if(a[i]!=b[i]&&c) endd=i;
        }
        cout<<start<<" "<<endd<<endl;
        delete a,b;
    }
    return 0;
}
