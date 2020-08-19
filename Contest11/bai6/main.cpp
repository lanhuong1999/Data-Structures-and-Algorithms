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
}
Tree create(int level[], int n){
    Tree root=new node;
    root=makeNode(level[0]);
    queue<Tree>q; q.push(root);
    int i=1;
    while(!q.empty()){
        Tree t=q.front(); q.pop();
        Tree l=new node;
        Tree r=new node;
        if(i<n){
            l=makeNode(level[i++]);
            t->left=l;
            q.push(l);
        }
        if(i<n){
            r=makeNode(level[i++]);
            t->right=r;
            q.push(r);
        }
    }
    return root;
}
void LRN(Tree root){
    if(root!=NULL){
        LRN(root->left);
        LRN(root->right);
        cout<<root->infor<<" ";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        int n, *in, *level;
        cin>>n;
        in=new int[n];
        level=new int[n];
        for(int i=0;i<n;i++) cin>>in[i];
        for(int i=0;i<n;i++) cin>>level[i];
        Tree root=create(level,n);
        LRN(root);
        cout<<endl;
        delete in, level;
    }
    return 0;
}
