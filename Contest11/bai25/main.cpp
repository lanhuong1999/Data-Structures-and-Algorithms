#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int infor;
    node *left;
    node *right;
    node(int x){
        infor=x;
        left=right=NULL;
    }
}*Tree;
Tree createBST(int a[], int l, int r){
    if(l>r) return NULL;
    int m=(l+r)/2;
    Tree t=new node(a[m]);
    t->left=createBST(a,l,m-1);
    t->right=createBST(a,m+1,r);
    return t;
}
void preOrder(Tree root){
    if(root==NULL) return;
    cout<<root->infor<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        Tree root=createBST(a,0,n-1);
        preOrder(root);
        cout<<endl;
    }
    return 0;
}
