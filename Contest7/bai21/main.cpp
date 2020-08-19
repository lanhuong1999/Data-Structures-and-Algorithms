#include <bits/stdc++.h>

using namespace std;
void next_greater(int n, int a[], int N[]){
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&a[st.top()]<=a[i]) st.pop();
        if(!st.empty()) N[i]=st.top();
        else N[i]=-1;
        st.push(i);
    }
}
void right_smaller(int n, int a[], int R[]){
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(!st.empty()) R[i]=st.top();
        else R[i]=-1;
        st.push(i);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int *a;
        a=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int *N; N=new int[n];
        int *R; R=new int[n];

        next_greater(n,a,N);

        right_smaller(n,a,R);

        int *b; b=new int[n];
        for(int i=0;i<n;i++){
            if(N[i]!=-1&&N[i]!=n-1)
                b[i]=R[N[i]];
            else b[i]=-1;
        }
        for(int i=0;i<n;i++){
            if(b[i]!=-1)
                cout<<a[b[i]]<<" ";
            else cout<<b[i]<<" ";
        }
        cout<<endl;
        delete a,b,N,R;
    }
    return 0;
}
