#include <bits/stdc++.h>

using namespace std;
bool tang(char a[],int n){
    for(int i=0;i<n-1;i++)
        if(a[i+1]<a[i]) return false;
    return true;
}
bool giam(char a[],int n){
    for(int i=0;i<n-1;i++)
        if(a[i+1]>a[i]) return false;
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--){
        char a[500]; cin>>a;
        int n=strlen(a);
        if(tang(a,n)||giam(a,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
