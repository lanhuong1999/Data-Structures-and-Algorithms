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
bool isLeaves(Tree root){
    if(root==NULL) return false;
    if(root->left==NULL&&root->right==NULL)
        return true;
    return false;
}
int sumRightLeaves(Tree root){
    int res=0;
    if(root!=NULL){
        if(isLeaves(root->right))
            res+=root->right->infor;
        else res+=sumRightLeaves(root->right);
        res+=sumRightLeaves(root->left);
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        cout<<sumRightLeaves(root)<<endl;
    }
    return 0;
}
