#include <iostream>
#define maxn 20
using namespace std;
int n,k,a[maxn];
void inkq(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void xnp(int m){
    if(m>n){
        int dem=0;
        for(int i=1;i<=n;i++)
            if(a[i]==1) dem++;
        if(dem==k) inkq();
        return;
    }
    for(int i=0;i<=1;i++){
        a[m]=i;
        xnp(m+1);
    }

}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        xnp(1);
    }
    return 0;
}
