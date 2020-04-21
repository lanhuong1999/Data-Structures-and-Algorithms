#include <bits/stdc++.h>
#define maxn 20
using namespace std;
int n,k,a[maxn],b[maxn],stop;
bool c;
bool ktra(int m){
    int temp=0;
    for(int i=1;i<=m;i++) temp+=a[b[i]];
    if(temp==k){
        c=true;
        cout<<"[";
        for(int i=1;i<=m;i++){
            cout<<a[b[i]];
            if(i!=m) cout<<" ";
        }
        cout<<"] ";
    }
}
void thkt(int m){
    int i=m;
    while(b[i]==n-m+i) --i;
    if(i>0){
        b[i]+=1;
        for(int j=i+1;j<=m;j++) b[j]=b[j-1]+1;
    }
    else stop=1;
}
void resetb(){for(int i=1;i<=n;i++) b[i]=i;}
int main()
{
    int t;cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        c=false;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        resetb();
        for(int i=n;i>=1;i--){
            stop=0;
            resetb();
            while(!stop){
                ktra(i);
                thkt(i);
            }
        }
        if(!c) cout<<-1;
        cout<<endl;
    }
    return 0;
}
