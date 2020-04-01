/*b0=g0
b1 = b0 XOR g1
b2= b1 XOR g2
b3= b2 XOR g3 .....
*/
#include <bits/stdc++.h>
#define maxn 100
using namespace std;
char res[maxn];
void gray2bin(char a[]){
    int n=strlen(a);
    res[0]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==res[i-1]) res[i]='0';
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
        gray2bin(a);
        cout<<res<<endl;
    }
    return 0;
}
