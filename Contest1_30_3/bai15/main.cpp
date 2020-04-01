#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
void hvkt(char a[]){
    int i,j;
    int n=strlen(a);
    i=j=n-1;
    while(a[i]<=a[i-1]) --i;
    if(i==0){
        strcpy(a,"BIGGEST");
        return;
    }
    while(a[j]<=a[i-1]) --j;
    swap(a[i-1],a[j]);
    for(j=n-1;j>i;j--,i++)swap(a[j],a[i]);
}

int main()
{
    int t;cin>>t;
    while(t--){
        int tc;
        char a[maxn];
        cin>>tc>>a;
        hvkt(a);
        cout<<tc<<" "<<a<<endl;
    }
    return 0;
}
