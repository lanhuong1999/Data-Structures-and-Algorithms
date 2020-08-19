#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n; cin>>n;
    ll *a;
    a=new ll[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
