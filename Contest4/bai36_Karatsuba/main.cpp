#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll powN(int n, ll k){
    if(k==0) return 1;
    if(k==1) return n;
    ll a=powN(n,k/2);
    if(k%2) return a*a*n;
    return a*a;
}
int makeEqual(string &x, string &y){
    int l1=x.length();
    int l2=y.length();
    if(l1<l2){
        for(int i=0;i<l2-l1;i++) x='0'+x;
        return l2;
    }
    else
        for(int i=0;i<l1-l2;i++) y='0'+y;
    return l1;
}
string addString(string x, string y){
    string res="";
    int len=x.length();
    int carry=0;
    for(int i=len-1;i>=0;i--){
        int xBit=x[i]-'0';
        int yBit=y[i]-'0';
        int sum=(xBit^yBit^carry)+'0';
        res=(char)sum+res;
        carry=(xBit&yBit)|(xBit&carry)|(yBit&carry);
    }
    if(carry) res='1'+res;
    return res;
}
ll mulSingle(string x, string y){
    return (x[0]-'0')*(y[0]-'0');
}
ll fastMul(string x, string y){
    int n=makeEqual(x,y);
    if(n==1) return mulSingle(x,y);
    if(n%2){
        x='0'+x;
        y='0'+y;
        n+=1;
    }
    int l=n/2;
    string a=x.substr(0,l);
    string b=x.substr(l,l);
    string c=y.substr(0,l);
    string d=y.substr(l,l);
    ll u=fastMul(a,c);
    ll v=fastMul(b,d);
    ll w=fastMul(addString(a,b),addString(c,d));
    return u*powN(2,n)+(w-u-v)*powN(2,l)+v;
}
int main()
{
    int t;cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        cout<<fastMul(x,y)<<endl;
    }
    return 0;
}
