#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,k,res;
        cin>>n>>k;
        res=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==k) res=i+1;
        }
        cout<<res<<endl;
    }
    return 0;
}
