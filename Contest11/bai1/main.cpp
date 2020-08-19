#include <bits/stdc++.h>
using namespace std;
bool isOperator(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^')
        return true;
    else return false;
}
typedef struct node{
    char infor;
    node *left;
    node *right;
} *Tree;
Tree makeNode(char x){
    Tree p = new node;
    p->infor=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
Tree solve(string s){
    stack<Tree> st;
    Tree t,t1,t2;
    for(int i=0;i<s.length();i++){
        if(!isOperator(s[i])){
            t=makeNode(s[i]);
            st.push(t);
        }
        else{
            t=makeNode(s[i]);
            t1=st.top(); st.pop();
            t2=st.top(); st.pop();
            t->right=t1;
            t->left=t2;
            st.push(t);
        }
    }
    return st.top();
}
void LNR(Tree T){
    if(T!=NULL){
        LNR(T->left);
        cout<<T->infor<<" ";
        LNR(T->right);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        Tree T=solve(s);
        LNR(T);
        cout<<endl;
    }
    return 0;
}
