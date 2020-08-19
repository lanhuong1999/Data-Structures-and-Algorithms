#include <bits/stdc++.h>
#define maxn 205
using namespace std;
int s[maxn],top=-1;
void push(int x){
    top++;
    s[top]=x;
}
bool isEmpty(){
    return (top==-1);
}
void show(){
    if(isEmpty()){
        cout<<"empty"<<endl;
        return;
    }
    for(int i=top;i>=0;i--)
        cout<<s[top-i]<<" ";
    cout<<endl;
}
void pop(){
    if(top==-1) return;
    top-=1;
}
int main()
{
    string mode;
    while(cin>>mode){
        if(mode=="push"){
            int x; cin>>x;
            push(x);

        }
        if(mode=="show"){
            show();
        }
        if(mode=="pop"){
            pop();
        }
        if(mode=="exit") break;
    }
    return 0;
}
