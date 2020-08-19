#include <bits/stdc++.h>
#define maxn 30
typedef long long ll;
using namespace std;
ll poW(ll n, int k){
    if(k==0) return 1;
    ll x=poW(n,k/2);
    if(k%2) return x*x*n;
    return x*x;
}
ll tinhdec(char n[],int k){
    ll res=0;
    int i=0;
    int l=strlen(n)-1;
    while(i<=l){
        int a=n[l-i]-'0';
        res+=(ll)(a*poW(k,i));
        i++;
    }
    return res;
}
void inkq(ll n,int k){
    stack<int>s;
    while(n!=0){
        s.push(n%k);
        n/=k;
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    int k;
    char a[maxn],b[maxn];
    cin>>k>>a>>b;
    ll c1=tinhdec(a,k);
    ll c2=tinhdec(b,k);
    inkq(c1+c2,k);
    cout<<endl;
    return 0;
}
