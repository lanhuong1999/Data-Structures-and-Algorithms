#include <bits/stdc++.h>
#define maxn 10000
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        char a[maxn];
        cin>>a;
        int vs[maxn];
        memset(vs,0,sizeof(vs));
        int maxd=0;
        int n=strlen(a);
        for(int i=0;i<n-1;i++){
            if(!vs[i]){
                int dem=1;
                vs[i]=1;
                for(int j=i+1;j<n;j++){
                    if(a[i]==a[j]){
                        dem++; vs[j]=1;
                    }
                }
                if(dem>maxd) maxd=dem;
            }
        }
        if(maxd==1) cout<<1;
        else{
            if((n-1)/(maxd-1)>1) cout<<1;
            else cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}
