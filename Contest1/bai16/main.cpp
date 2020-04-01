#include <bits/stdc++.h>
using namespace std;
char solm[10]={'I','V','X','L','C','D','M'};
int gt[10]={1,5,10,50,100,500,1000};
char a[10];
int findValue(char c){
    for(int i=0;i<strlen(solm);i++)
        if(solm[i]==c) return gt[i];
    return 0;
}
int solve(){
    int n=strlen(a);
    int value=findValue(a[n-1]);
    for(int i=n-2;i>=0;i--){
        int x=findValue(a[i]);
        int y=findValue(a[i+1]);
        if(x<y) value-=x;
        else value+=x;

    }
    return value;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        memset(a,'\0',sizeof(a));
        cin>>a;
        cout<<solve()<<endl;
    }
    return 0;
}
