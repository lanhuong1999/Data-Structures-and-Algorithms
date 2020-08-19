#include <bits/stdc++.h>
#define maxn 100
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[maxn];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        int m=max(k,n-k);
        int s1=0,s2=0;
        for(int i=0;i<m;i++) s1+=a[i];
        for(int i=m;i<n;i++) s2+=a[i];
        cout<<s1-s2<<endl;
    }
    return 0;
}
