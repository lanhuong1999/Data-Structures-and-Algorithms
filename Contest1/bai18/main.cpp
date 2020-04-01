#include <bits/stdc++.h>

using namespace std;
char a[60];
int b[60];
int res;
void solve(){
    int m=0;
    while(m<strlen(a)-1){
        int n=0;
        for(n=m+1;n<strlen(a);n++)
            if(a[m]==a[n]) break;
        for(int i=b[m]+1;i<b[n]-1;i++){
            int dem=1;
            for(int j=i+1;j<b[n];j++){
                if(a[i]==a[j]) dem++;
            }
            if(dem==1) res+=1;
        }
        m++;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    cin>>a;
    for(int i=0;i<strlen(a);i++) b[i]=i;
    solve();
    cout<<res/2<<endl;
    return 0;
}
