#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dodai(ll n){
    ll len=0;
    while(pow(2,len)<=n) len++;
    return pow(2,len)-1;
}
ll solve(ll n,ll i){
    if(i==0) return 0;
    if(n==1) return 1;
    ll len=dodai(n); // độ dài dãy khi  đã khai triển hết n
    ll val=n%2;
    if(i<=len/2) return solve(n/2,i); // tính nửa bên trái
    ll res=solve(n/2,len/2);
    if(i==len) return res*2+val; // lấy cả đoạn thì sum là cái này
    if(i==(len+1)/2) return val+res; // nếu i ở chính giữa 
    if(i>(len+1)/2) return res+val+solve(n/2,i-(len+1)/2); //tính nửa bên phải
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        ll x=solve(n,r);
        ll y=solve(n,l-1);
        cout<<x-y<<endl;
    }
    return 0;
}
