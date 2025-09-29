#include<iostream>
using namespace std;

struct Tree
{
    int data;
    Tree *left,*right;
};

Tree *root,*temp,*ttemp,*p;

void init()
{
    root=temp=ttemp=NULL;
}

void create_root(int val)
{
    root=(Tree *)malloc(sizeof(Tree));
    root->data=val;
    root->left=root->right=NULL;
}

void add_nodes(int val)
{
    temp=root;
    while(temp!=NULL)
    {
        p=temp;
        if(temp->data>val)
          temp=temp->left;
        else
          temp=temp->right;
    }
    ttemp=(Tree *)malloc(sizeof(Tree));
    ttemp->data=val;
    ttemp->left=ttemp->right=NULL;
    if(p->data>val)
     p->left=ttemp;
    else
     p->right=ttemp;
}