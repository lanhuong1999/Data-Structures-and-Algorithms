#include <iostream>
using namespace std;
int pre[1005];
void postOrder(int l, int r){
    int i;
    if(l>r) return;
    for(i=l+1;i<=r;i++)
        if(pre[i]>pre[l]) break;
    postOrder(l+1,i-1);
    postOrder(i,r);
    cout<<pre[l]<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++) cin>>pre[i];
        postOrder(0,n-1);
        cout<<endl;
    }
    return 0;
}
