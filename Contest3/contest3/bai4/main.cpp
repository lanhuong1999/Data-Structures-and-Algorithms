#include <bits/stdc++.h>
#define maxn 100
typedef long long ll;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[maxn];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll t1=0,t2=0;
        for(int i=0;i<n;i++){
            if(i%2==0) t1=t1*10+(ll)a[i];
            else t2=t2*10+(ll)a[i];
        }
        cout<<t1+t2<<endl;
    }
    return 0;
}
