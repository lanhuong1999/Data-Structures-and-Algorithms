#include<bits/stdc++.h>
using namespace std;
int canhHv(int n){
    int m=sqrt(n);
    if(m*m==n) return m;
    return 0;
}
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int dt= a*b+c*d+e*f;
    int x=canhHv(dt);
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(e>f) swap(e,f);
    if(b==d && d==f && f==x) cout<<"YES";
    else{
        if(d==x){swap(a,c); swap(b,d);}
        if(f==x){swap(a,e);swap(b,f);}
        if(b==x){
            int temp=x-a;
            if((c==temp &&e ==temp)||(c==temp && f==temp)||(d==temp && e==temp)||(d==temp && f==temp))
                cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
    }
}
