#include <bits/stdc++.h>
int n,res;
int *a;
using namespace std;
void solve(){
    int m=n/2;
    int i=0;
    while(i<n/2 && m<n){
        if(a[m]>=2*a[i]){
            res--;
            i++;
        }
        m++;
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        res=n;
        a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        solve();
        cout<<res<<endl;
        delete a;
    }
    return 0;
}
