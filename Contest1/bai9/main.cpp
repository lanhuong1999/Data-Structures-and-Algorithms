#include <bits/stdc++.h>
#define maxn 500
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        char a[maxn];
        scanf("%s",a);
        int len=strlen(a);
        char b[maxn];
        strcpy(b,a);
        if(next_permutation(a,a+len)&&prev_permutation(b,b+len)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
