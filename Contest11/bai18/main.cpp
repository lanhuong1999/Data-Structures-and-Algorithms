#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int infor;
    node *left;
    node *right;
} *Tree;
Tree makeNode(int x){
    Tree p=new node;
    p->infor=x;
    p->left=p->right=NULL;
    return p;
}
Tree levelOrder(Tree root, int x){
    if(root==NULL){
        root=makeNode(x);
        return root;
    }
    if(x<=root->infor)
        root->left=levelOrder(root->left,x);
    else
        root->right=levelOrder(root->right,x);
    return root;
}
Tree create(int level[], int n){
    if(n==0) return NULL;
    Tree root=NULL;
    for(int i=0;i<n;i++)
        root=levelOrder(root,level[i]);
    return root;
}
void NLR(Tree root){
    if(root!=NULL){
        cout<<root->infor<<" ";
        NLR(root->left);
        NLR(root->right);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n, *level;
        cin>>n; level=new int[n];
        for(int i=0;i<n;i++) cin>>level[i];
        Tree root=create(level,n);
        NLR(root);
        cout<<endl;
    }
    return 0;
}
