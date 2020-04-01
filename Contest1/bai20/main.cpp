#include <bits/stdc++.h>

using namespace std;
int n;
int a[100],b[100];
bool check(){
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++)
        if(a[i]>b[i]) return false;
    return true;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    if(check()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
