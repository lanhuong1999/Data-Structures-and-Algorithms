#include <bits/stdc++.h>

using namespace std;
typedef struct node{
    int infor;
    node *left;
    node *right;
}*Tree;
Tree makeNode(int x){
    Tree p=new node;
    p->infor=x;
    p->left=p->right=NULL;
    return p;
}
Tree create(int n){
    Tree root=NULL;
    map<int,Tree>m;
    while(n--){
        int a,b; char c;
        cin>>a>>b>>c;
        Tree cha=new node;
        if(m.find(a)==m.end()){
            cha=makeNode(a);
            m[a]=cha;
            if(root==NULL) root=cha;
        }
        else cha=m[a];
        Tree con=makeNode(b);
        if(c=='L') cha->left=con;
        else if(c=='R') cha->right=con;
        m[b]=con;
    }
    return root;
}
bool isLeaves(Tree t){
    if(t==NULL) return false;
    if(t->left==NULL&&t->right==NULL) return true;
    return false;
}
int sumLeftLeaves(Tree root){
    int res=0;
    if(root!=NULL){
        if(isLeaves(root->left))
            res+=root->left->infor;
        else
            res+=sumLeftLeaves(root->left);
        res+=sumLeftLeaves(root->right);
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        cout<<sumLeftLeaves(root)<<endl;
    }
    return 0;
}
