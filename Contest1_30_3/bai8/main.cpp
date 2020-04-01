#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,a[100],stop;
void inkq(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void hvn(){
    int i,j;
    i=j=n;
    while(a[i]>a[i-1]) --i;
    if(i==0){
        stop=1;
        return;
    }
    while(a[j]>a[i-1])--j;
    swap(a[i-1],a[j]);
    for(j=n;j>i;j--,i++) swap(a[i],a[j]);
}
int main()
{
    int t;cin>>t;
    while(t--){
        stop=0;
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=1;i<=n;i++)a[i]=n-i+1;
        while(!stop){
            inkq();
            hvn();
        }
        cout<<endl;
    }
    return 0;
}
