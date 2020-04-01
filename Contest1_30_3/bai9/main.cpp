#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void sinhGray(int n){
    if(n==0) return;
    res.push_back("0");
    res.push_back("1");
    for(int i=2;i<(1<<n);i=i*2){
        for(int j=i-1;j>=0;j--)
            res.push_back(res[j]);
        for(int j=0;j<i;j++) res[j]="0"+res[j];
        for(int j=i;j<i*2;j++) res[j]="1"+res[j];
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        res.clear();
        int n; cin>>n;
        sinhGray(n);
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
}
