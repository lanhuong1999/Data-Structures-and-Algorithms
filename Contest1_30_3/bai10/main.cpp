/*gray=bin xor (bin>>1)*/
#include <bits/stdc++.h>
#define maxn 100
using namespace std;
char res[maxn];
void bin2gray(char a[]){
    int n=strlen(a);
    if(a[0]=='0') res[0]='0';
    else res[0]='1';
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) res[i]='0';
        else res[i]='1';
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(res,' ',sizeof(res));
        char a[maxn];
        cin>>a;
        bin2gray(a);
      cout<<res<<endl;
    }
    return 0;
}

