#include <bits/stdc++.h>

using namespace std;
long long res[505];
bool vs[505];
void init(){
    int dem=0;
    queue<long long> q;
    q.push(9);
    while(dem<500){
        long long t=q.front();
        q.pop();
        for(int i=1;i<=500&&i<=t;i++){
            if(!vs[i]&&t%i==0){
                vs[i]=true;
                res[i]=t;
                dem++;
            }
        }
        q.push(t*10);
        q.push(t*10+9);
    }
}
int main()
{
    int t;cin>>t;
    init();
    while(t--){
        int n;
        cin>>n;
        cout<<res[n]<<endl;
    }
    return 0;
}
