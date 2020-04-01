#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        char a[maxn];
        cin>>a;
        int i=strlen(a)-1;
        while(a[i]=='1') a[i--]='0';
        if(i>=0) a[i]='1';
        cout<<a<<endl;
    }
    return 0;
}
