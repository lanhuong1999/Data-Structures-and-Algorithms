#include <iostream>

using namespace std;
int solve(int n, int m){
    if(n==1) return 1;
    return (solve(n-1,m)+m)%n+1;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}
