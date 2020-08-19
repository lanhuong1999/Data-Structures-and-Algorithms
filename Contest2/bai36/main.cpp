#include <bits/stdc++.h>
using namespace std;
bool kt;
int c[6];
long long tinh(int x,int y, int z){
    if(z==1) return x+y;
    else if(z==2) return x-y;
    else if(z==3) return x*y;
}
void solve(int s,int t){
    for(int i=1;i<=3&&!kt;i++){
        long long temp=tinh(s,c[t],i);
        if(t==5){
            if(temp==23) kt=true;
        }
        else solve(temp,t+1);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        kt=false;
        int a[6],b[6];
        for(int i=1;i<=5;i++){
            cin>>a[i];
            b[i]=i;
        }

        do{
            for(int i=1;i<=5;i++)
                c[i]=a[b[i]];
            solve(c[1],2);
        }while(next_permutation(b+1,b+6));
        if(kt) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
