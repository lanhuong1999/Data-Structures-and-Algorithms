#include <bits/stdc++.h>

using namespace std;
void search_binary(int a[], int n, int x){
    int l=0,r=n-1;
    int m=0;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>x&&a[m-1]!=x)r=m-1;
        if(a[m]>x&&a[m-1]==x) break;
        if(a[m]==x) l=m+1;
    }
    cout<<a[m]<<endl;

}
int main()
{
    int t;cin>>t;
    while(t--){
        int n,*a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]==a[n-1])cout<<-1<<endl;
        else{
            cout<<a[0]<<" ";
            search_binary(a,n,a[0]);
        }
        delete a;
    }
    return 0;
}
