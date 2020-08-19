#include <bits/stdc++.h>
#define maxn 10000
using namespace std;
int n,D,lenp;
bool c;

pair<char,int>p[maxn];
bool sortPair(pair<char,int>x, pair<char,int>y){
    return x.second>y.second;
}
void solve(){
    int i=0;
    char res[maxn];
    while(i<lenp){
        int k=p[i].second;
        for(int j=0;j<k;j++){
            if(i+j*D>=n){
                c=true;
                return;
            }
            res[i+j*D]=p[i].first;
        }
        i++;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        char a[maxn];
        cin>>D>>a;
        n=strlen(a);
        lenp=0; c=false;
        int vs[maxn]={0};
        for(int i=0;i<n;i++){
            if(!vs[i]){
                int dem=0;
                for(int j=i;j<n;j++){
                    if(a[i]==a[j]){
                        dem++; vs[j]=1;
                    }
                }
                p[lenp].first=a[i];
                p[lenp].second=dem;
                lenp++;
            }
        }
        sort(p,p+lenp,sortPair);
        solve();
        if(c) cout<<-1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
