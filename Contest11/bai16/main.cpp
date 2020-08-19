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
void makeNode(Tree root, int cha, int con, char c){
    switch(c){
    case 'L':
        root->left=new node(con);
        break;
    case 'R':
        root->right=new node(con);
        break;
    }
}
void insert(Tree root, int cha, int con, char c){
    if(root==NULL) return;
    if(root->infor==cha)
        makeNode(root,cha,con,c);
    else{
        insert(root->left,cha,con,c);
        insert(root->right,cha,con,c);
    }
}
int findMaxSum(Tree root,int &res){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->infor;
    int ls=findMaxSum(root->left,res);
    int rs=findMaxSum(root->right,res);
    if(root->left!=NULL && root->left!=NULL){
        res=max(res,ls+rs+root->infor);
        return max(ls,rs)+root->infor;
    }
    if(root->left==NULL) return rs+root->infor;
    else return ls+root->infor;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=NULL;
        while(n--){
            int a,b; char c;
            cin>>a>>b>>c;
            if(root==NULL){
                root=new node(a);
                makeNode(root,a,b,c);
            }
            else insert(root,a,b,c);
        }
        int res=INT_MIN;
        findMaxSum(root,res);
        cout<<res<<endl;
    }
    return 0;
}
