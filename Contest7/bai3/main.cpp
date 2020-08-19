#include<bits/stdc++.h>
using namespace std;
void solve(string a){
    a=a+" ";
    stack<char>s;
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            while(!s.empty()){
                cout<<s.top();
                s.pop();
            }
            if(i<a.length()-1) cout<<" ";
        }
        else s.push(a[i]);
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin,a);
        solve(a);
    }
}
