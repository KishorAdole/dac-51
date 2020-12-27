#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    struct node *left;
    int data;
    struct node *right;
};

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void preOrder(struct node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    struct node *n1=new struct node;
    n1->data=10;
    n1->left=NULL;
    n1->right=NULL;

    struct node *n2=new struct node;
    n2->data=20;
    n2->left=NULL;
    n2->right=NULL;
    n1->left=n2;

    struct node *n3=new struct node;
    n3->data=30;
    n3->left=NULL;
    n3->right=NULL;
    n1->right=n3;

    struct node *n4=new struct node;
    n4->data=40;
    n4->left=NULL;
    n4->right=NULL;
    n2->left=n4;

    struct node *n5=new struct node;
    n5->data=50;
    n5->left=NULL;
    n5->right=NULL;
    n2->right=n5;

    struct node *n6=new struct node;
    n6->data=60;
    n6->left=NULL;
    n6->right=NULL;
    n3->left=n6;

    cout<<"calling inorder "<<endl;
    inOrder(n1);
    cout<<endl;
    cout<<"calling preorder "<<endl;
    preOrder(n1);
    cout<<endl;
    cout<<"calling postorder "<<endl;
    postOrder(n1);
}
