#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int search(int in[], int x, int n){
    for(int i=0;i<n;i++)
        if(in[i]==x) return i;
    return -1;
}
void solve(int in[], int pre[], int n){
    int root=search(in,pre[0],n);
    if(root!=0)
        solve(in,pre+1,root);
    if(root!=n-1)
        solve(in+root+1,pre+root+1,n-root-1);
    cout<<pre[0]<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--){
        int *in, *pre;
        int n; cin>>n;
        in=new int[n];
        pre=new int[n];
        for(int i=0;i<n;i++) cin>>in[i];
        for(int i=0;i<n;i++) cin>>pre[i];
        solve(in,pre,n);
        cout<<endl;
        delete in, pre;
    }
    return 0;
}
