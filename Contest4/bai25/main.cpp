#include <bits/stdc++.h>

using namespace std;
long long f[100];
void dayfibo(){
    f[0]=0; f[1]=1;
    for(int i=2;i<93;i++)
        f[i]=f[i-2]+f[i-1];
}
char solve(int n, long long k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k>f[n-2]) return solve(n-1,k-f[n-2]);
    else return solve(n-2,k);
}
int main()
{
    int t;cin>>t;
    dayfibo();
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
    return 0;
}
