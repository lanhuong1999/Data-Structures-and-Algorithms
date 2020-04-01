#include <bits/stdc++.h>

using namespace std;

char a[10];

bool check(){
    int x=a[0]-'0';
    int y=a[4]-'0';
    int res=a[8]-'0';
    if(x+y==res) return true;
    return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    cin.getline(a,sizeof(a));
    if(check()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
