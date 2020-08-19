#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int n,m,a[maxn],b[maxn];
int search_binary(int x[],int len,int k){
    int l=0,r=len-1;
    while(l<=r){
        int m=(l+r)/2;
        if(x[m]==k) return 1;
        else if(x[m]>k) r=m-1;
        else l=m+1;
    }
    return 0;
}
void solve(int a[], int n, int b[], int m){
    vector<int> unionArray,intersecArray;
    for(int i=0;i<n;i++) unionArray.push_back(a[i]);
    for(int i=0;i<m;i++){
        if(!search_binary(a,n,b[i])){
            unionArray.push_back(b[i]);
        }
        else intersecArray.push_back(b[i]);
    }

    sort(unionArray.begin(),unionArray.end());
    sort(intersecArray.begin(),intersecArray.end());

    for(int i=0;i<unionArray.size();i++)
        cout<<unionArray[i]<<" ";
    cout<<endl;

    for(int i=0;i<intersecArray.size();i++)
        cout<<intersecArray[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        if(n>=m)solve(a,n,b,m);
        else solve(b,m,a,n);
    }
    return 0;
}
