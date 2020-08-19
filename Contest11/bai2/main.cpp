#include <bits/stdc++.h>
using namespace std;
string s[200];
int n;
bool isOperator(string x){
    if(x=="+"||x=="-"||x=="*"||x=="/")
        return true;
    return false;
}
typedef struct node{
    string infor;
    node *left;
    node *right;
} *Tree;
Tree makeNode(string x){
    Tree p=new node;
    p->infor=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
Tree create(){
    Tree root=new node;
    int i=0; queue<Tree>q;
    root=makeNode(s[i++]);
    q.push(root);
    while(!q.empty()&&i<n){
        Tree t=q.front(); q.pop();
        Tree l=new node;
        Tree r=new node;
        if(isOperator(t->infor)){
            l=makeNode(s[i++]);
            r=makeNode(s[i++]);
            t->left=l;
            t->right=r;
            q.push(l);
            q.push(r);
        }
    }
    return root;
}
int calc(Tree root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        istringstream s_cin(root->infor);
        int x; s_cin>>x;
        return x;
    }
    int l=calc(root->left);
    int r=calc(root->right);
    if(root->infor=="+") return l+r;
    if(root->infor=="-") return l-r;
    if(root->infor=="*") return l*r;
    if(root->infor=="/") return l/r;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>s[i];
        Tree T=new node;
        T= create();
        cout<<calc(T)<<endl;
        delete(T);
    }
    return 0;
}
