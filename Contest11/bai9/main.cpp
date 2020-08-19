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
bool check(Tree root, int level, int &leafLevel){
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL){
        if(leafLevel==0){
            leafLevel=level;
            return true;
        }
        return level==leafLevel;
    }
    return check(root->left,level+1,leafLevel)&&
            check(root->right,level+1,leafLevel);
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int level=0, leafLevel=0;
        Tree root=create(n);
        if(check(root,level,leafLevel)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
