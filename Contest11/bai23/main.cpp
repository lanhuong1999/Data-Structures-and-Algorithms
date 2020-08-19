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
Tree BST(int pre[], int &index, int val, int min, int max, int size){
    if(index>=size) return NULL;
    Tree root=NULL;
    if(val>min && val<max){
        root=new node(val);
        index+=1;
        if(index<size){
            root->left=BST(pre,index,pre[index],min,val,size);
            root->right=BST(pre,index,pre[index],val,max,size);
        }
    }
    return root;
}
int maxDepth(Tree root){
    if(root==NULL) return 0;
    else{
        int lDepth=maxDepth(root->left);
        int rDepth=maxDepth(root->right);
        return max(lDepth,rDepth)+1;
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int pre[n];
        for(int i=0;i<n;i++) cin>>pre[i];
        int index=0;
        Tree root=BST(pre,index,pre[0],INT_MIN,INT_MAX,n);
        cout<<maxDepth(root)-1<<endl;
    }
    return 0;
}
