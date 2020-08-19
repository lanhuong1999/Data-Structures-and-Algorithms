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
    p->left = p->right=NULL;
    return p;
}
void level_order(Tree root){
    if(root==NULL) return;
    queue<Tree>q; q.push(root);
    while(!q.empty()){
        Tree t=q.front(); q.pop();
        cout<<t->infor<<" ";
        if(t->left!=NULL) q.push(t->left);
        if(t->right!=NULL) q.push(t->right);
    }
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
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        level_order(root);
        cout<<endl;
    }
    return 0;
}
