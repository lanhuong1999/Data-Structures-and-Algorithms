#include <bits/stdc++.h>

using namespace std;
char a[10],b[10];
int changeNum(char x, char y){
    int s1=0,s2=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==x) a[i]=y;
        s1=s1*10+(a[i]-'0');
    }
    for(int i=0;i<strlen(b);i++){
        if(b[i]==x) b[i]=y;
        s2=s2*10+(b[i]-'0');
    }
    return s1+s2;
}
int main()
{

    cin>>a>>b;
    int smin=0,smax=0;
    smax=changeNum('5','6');
    smin=changeNum('6','5');
    cout<<smin<<" "<<smax<<endl;
    return 0;
}
