#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head=NULL,*tail=NULL,*temp;
int x;

void createDCLL(){
    cout<<"enter data ";
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=tail=newnode;
        head->next=head;
        head->prev=head;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;

    }
}

void display(){
    temp=head;
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
     cout<<temp->data<<endl;
}

int main(){
    int ch;
    while(true){
    cout<<"1. insert node 2.dislay"<<endl;
    cin>>ch;
    if(ch==1){
        createDCLL();
    }
    else if(ch==2){
        display();
    }
    else{
        cout<<"invalid input"<<endl;
    }
    }
}