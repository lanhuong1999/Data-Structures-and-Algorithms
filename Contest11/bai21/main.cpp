#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int pre[n];
        for(int i=0;i<n;i++) cin>>pre[i];
        stack<int>st;
        for(int i=0,j=1;j<n;i++,j++){
            bool found =false;
            if(pre[i]>pre[j]) st.push(pre[i]);
            else{
                while(!st.empty()){
                    if(pre[j]>st.top()){
                        st.pop();
                        found=true;
                    }
                    else break;
                }
                if(found) cout<<pre[i]<<" ";
            }
        }
        cout<<pre[n-1]<<endl;
    }
    return 0;
}
