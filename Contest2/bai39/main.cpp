#include <bits/stdc++.h>

using namespace std;
string s;
long long n;
int main()
{
    cin>>s>>n;
    int len=s.length();
    int p = log2(n/len);// so lan lap de co vi tri n: len*(2^p)= max
    long long m = len;
    for (int i = 1; i <= p+1; i++)
        m = 2*m;
    while(m>len){
        if(n>m/2){
            n=n-m/2-1;
            if(n==0) n=m/2;
        }
        m/=2;
    }
    cout<<s[n-1];
    return 0;
}
