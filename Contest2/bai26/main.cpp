#include <bits/stdc++.h>
#define maxn 10
using namespace std;
char a[maxn];
int k;
int findMax(int i){
    int n=strlen(a);
    char maxc=a[n-1];
    int index=n-1;
    for(int j=n-1;j>i;j--)
    if(a[j]>maxc){
        maxc=a[j];
        index=j;
    }
    return index;
}
void solve(){
    int n=strlen(a);
    for(int i=0;i<n&&k>0;i++){
        int index=findMax(i);
        if(a[index]>a[i]){
            swap(a[i],a[index]);
            k--;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>k>>a;
        solve();
        cout<<a<<endl;
    }
    return 0;
}
