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
bool checkChild(Tree root){
    queue<Tree>q; q.push(root);
    while(!q.empty()){
        Tree t=q.front(); q.pop();
        Tree l=t->left;
        Tree r=t->right;
        if((l!=NULL&&r==NULL)||(l==NULL&&r!=NULL)) return false;
        if(l!=NULL&&r!=NULL){
            q.push(l); q.push(r);
        }
    }
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        if(checkChild(root)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
