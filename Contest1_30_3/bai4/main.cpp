#include <iostream>

using namespace std;
int n;
char a[20];
void xnp(int m){
    if(m>n){
        for(int i=1;i<=n;i++)
            cout<<a[i];
        cout<<" ";
        return;
    }
    for(int i='A';i<='B';i++){
        a[m]=i;
        xnp(m+1);
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        xnp(1);
        cout<<endl;
    }
    return 0;
}
