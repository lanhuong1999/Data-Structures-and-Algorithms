#include <bits/stdc++.h>
#define maxn 100
using namespace std;
int n,a[maxn],stop;
void inkq(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void hvkt(){
    int i,j;
    i=j=n;
    while(a[i]<a[i-1]) --i;
    if(i==1){
        stop=1;
        return;
    }
    while(a[j]<a[i-1])--j;
    swap(a[j],a[i-1]);
    for(j=n;j>i;j--,i++) swap(a[i],a[j]);
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        stop=0;
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=i;

        while(!stop){
            inkq();
            hvkt();
        }
        cout<<endl;
    }
    return 0;
}
