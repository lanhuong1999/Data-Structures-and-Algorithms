#include <bits/stdc++.h>

using namespace std;
int r[100005];
int main()
{
    int t; cin>>t;
    while(t--){
        memset(r,0,sizeof(r));
        int n; cin>>n;
        int *a; a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=a[i]) st.pop();
            if(!st.empty()) r[i]=st.top();
            else r[i]=-1;
            st.push(a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<r[i]<<" ";
        cout<<endl;
        delete a;
    }
    return 0;
}
//4 5 2 25
