#include <bits/stdc++.h>
#define maxn 10005
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,a[maxn],s;
        int l[maxn]={0};
        cin>>n;
        int k=0;
        for(int i=1;i<=n;i++){
            cin>>a[i]; k+=a[i];
        }
        sort(a+1,a+1+n);

        s=k/2;
        if(k%2||a[n]>s) cout<<"NO";
        else{
            l[s]=0; l[0]=1;
            for(int i=1;i<=n;i++)
                for(int j=s;j>=a[i];j--)
                    if(l[j]==0&&l[j-a[i]]==1) l[j]=1;
            if(l[s]==1) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
