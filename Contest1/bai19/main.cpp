#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                res+=(i%2==0);
                if(i*i!=n) res+=((n/i)%2==0);
            }
        }
        cout<<res<<endl;
    }
}
