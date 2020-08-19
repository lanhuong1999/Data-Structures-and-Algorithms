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
Tree create(int n){
    Tree root=NULL;
    map<int,Tree>m;
    while(n--){
        int a,b; char c;
        cin>>a>>b>>c;
        Tree cha=NULL;
        if(m.find(a)==m.end()){
            cha=new node(a);
            m[a]=cha;
            if(root==NULL) root=cha;
        }
        else cha=m[a];
        Tree con=new node(b);
        if(c=='L') cha->left=con;
        else if(c=='R') cha->right=con;
        m[b]=con;
    }
    return root;
}
void store(Tree root, vector<int>&v){
    if(root!=NULL){
        v.push_back(root->infor);
        store(root->left,v);
        store(root->right,v);
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        vector<int>v;
        store(root,v);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
