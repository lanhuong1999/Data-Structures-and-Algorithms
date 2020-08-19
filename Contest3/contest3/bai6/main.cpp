#include <bits/stdc++.h>
#define maxn 100
using namespace std;

int ktra(int a[],int n){
    int b[maxn];
    for(int i=0;i<n;i++) b[i]=a[i];
    sort(b,b+n);
    for(int i=0;i<n;i++)
        if(a[i]!=b[i]&&a[i]!=b[n-1-i]) return false;
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n,a[maxn];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(ktra(a,n)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
