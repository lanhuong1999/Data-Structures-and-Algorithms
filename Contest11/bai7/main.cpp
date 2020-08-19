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
void spiral(Tree root){
    deque<Tree>q;
    q.push_back(root);
    int dir=0; //r->l
    while(!q.empty()){
        int len=q.size();
        while(len--){
            if(dir==0){
                Tree t=q.back(); q.pop_back();
                if(t->right!=NULL)
                    q.push_front(t->right);
                if(t->left!=NULL)
                    q.push_front(t->left);
                cout<<t->infor<<" ";
            }
            else{
                Tree t=q.front(); q.pop_front();
                if(t->left!=NULL)
                    q.push_back(t->left);
                if(t->right!=NULL)
                    q.push_back(t->right);
                cout<<t->infor<<" ";
            }
        }
        dir=1-dir;
    }

}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        spiral(root);
        cout<<endl;
    }
    return 0;
}
