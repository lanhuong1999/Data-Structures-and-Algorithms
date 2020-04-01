#include <bits/stdc++.h>

using namespace std;

char number[10];

int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        memset(number,'\0',sizeof(number));
        cin>>number;
        int l=strlen(number)-1;
        if(number[0]==number[l]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
