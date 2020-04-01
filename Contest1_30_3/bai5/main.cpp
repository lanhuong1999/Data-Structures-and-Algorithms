#include <bits/stdc++.h>
#define maxn 20
using namespace std;
int n,k;
int a[maxn],stop;
void inkq(){
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
}
void thkt(){
    int i=k;
    while(a[i]==n-k+i) --i;
    if(i==0) stop=1;
    a[i]+=1;
    for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;

}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        stop=0;
        memset(a,0,sizeof(a));
        for(int i=1;i<=k;i++) a[i]=i;
        while(!stop){
            inkq();
            thkt();
        }
        cout<<endl;
    }
    return 0;
}
