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
bool identicalTree(Tree t1, Tree t2){
    if(t1==NULL && t2==NULL) return true;
    if(t1!=NULL && t2!=NULL){
        return (t1->infor==t2->infor) &&
        identicalTree(t1->left,t2->left) &&
        identicalTree(t1->right,t2->right);
    }
    return false;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root1=create(n);
        int m; cin>>m;
        Tree root2=create(m);
        if(identicalTree(root1,root2)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
