#include <bits/stdc++.h>
using namespace std;
void findPostOrder(int pre[], int n, int minVal, int maxVal,int &i){
    if(i==n) return;
    if(pre[i]<minVal||pre[i]>maxVal) return;
    int val=pre[i]; i++;
    findPostOrder(pre,n,minVal,val,i);
    findPostOrder(pre,n,val,maxVal,i);
    cout<<val<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,*pre;
        cin>>n; pre=new int[n];
        for(int i=0;i<n;i++) cin>>pre[i];
        int index=0;
        findPostOrder(pre,n,INT_MIN,INT_MAX,index);
        cout<<endl;
        delete pre;
    }
    return 0;
}
