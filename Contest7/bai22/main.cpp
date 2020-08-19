#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int a[maxn],r[maxn],l[maxn];
int n;
void left_smaller(){
    stack<int>st;
    for(int i=1;i<=n;i++){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(!st.empty()) l[i]=st.top();
        else l[i]=0;
        st.push(i);
    }
}
void right_smaller(){
    stack<int>st;
    for(int i=n;i>=1;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(!st.empty()) r[i]=st.top();
        else r[i]=n+1;
        st.push(i);
    }
}
void solve(){
    left_smaller();
    right_smaller();
    long long res=0;
    for(int i=1;i<=n;i++){
        res=max(res,(r[i]-l[i]-1)*(long long)a[i]);
    }
    cout<<res<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        memset(r,0,sizeof(r));
        memset(l,0,sizeof(l));
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        solve();
    }
    return 0;
}
