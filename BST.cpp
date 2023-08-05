#include<bits/stdc++.h>
using namespace std;

class bst
{
    public:
    bst *left;
    bst *right;
    int data;
};

bst *link(bst *root,int item)
{
    bst *ptr=new bst();
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->data=item;
    return ptr;
}

bst* insert(bst *root ,int item)
{
    if(root==NULL)
    {
        link(root,item);
    }
    else
    {
        if(item<=root->data)
        {
            root->left=insert(root->left,item);
        }
        else
        {
            root->right = insert(root->right,item);
        }
    }
    return root;
}

int main()
{
    bst *root=NULL;
    root=insert(root,20);
    root=insert(root,10);
    root=insert(root,30);
}
