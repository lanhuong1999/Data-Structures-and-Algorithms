#include <bits/stdc++.h>

using namespace std;
int n,a[100005];
int r[100005];

//7
// 0   1  2  3  4  5  6
//100 80 60 70 60 75 85

int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int>st;
    for(int i=0;i<n;i++) r[i]=-1;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&a[st.top()]<a[i]){
            r[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++)
        cout<<i-r[i]<<" ";
    cout<<endl;
    return 0;
}
