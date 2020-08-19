#include <bits/stdc++.h>
const int maxn = 1e7;
using namespace std;
int a[10],b[10];
int d[maxn];
int string2int(int x[]){
    int res=0;
    for(int i=1;i<=6;i++)
        res=res*10+x[i];
    return res;
}
int rotate_left(int x){
    int temp[10]={0};
    int i=6;
    while(x){
        temp[i]=(x%10);
        x/=10, --i;
    }
    int res[10]={0};
    res[1]=temp[4];
    res[2]=temp[1];
    res[3]=temp[3];
    res[4]=temp[5];
    res[5]=temp[2];
    res[6]=temp[6];
    return string2int(res);
}
int rotate_right(int x){
    int temp[10]={0};
    int i=6;
    while(x){
        temp[i]=(x%10);
        x/=10, --i;
    }
    int res[10]={0};
    res[1]=temp[1];
    res[2]=temp[5];
    res[3]=temp[2];
    res[4]=temp[4];
    res[5]=temp[6];
    res[6]=temp[3];
    return string2int(res);
}
int solve(){
    memset(d,0,sizeof(d));
    int s=string2int(a);
    int f=string2int(b);
    d[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int t=q.front(); q.pop();
        int v1=rotate_left(t);
        int v2=rotate_right(t);
        if(d[v1]==0) d[v1]=d[t]+1, q.push(v1);
        if(d[v2]==0) d[v2]=d[t]+1, q.push(v2);
        if(d[f]) break;
    }
    return d[f]-1;
}
int main()
{
    for(int i=1;i<=6;i++) cin>>a[i];
    for(int i=1;i<=6;i++) cin>>b[i];
    cout<<solve()<<endl;

    return 0;
}
