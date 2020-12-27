#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int x;
struct node *head=NULL;
struct node *temp=NULL;

void createCLL(){
    cout<<"enter data ";
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->next=NULL;
    
    if(head==NULL){
        head=temp=newnode;
    }
    else{
      temp->next=newnode;
      temp=newnode;
     
    }
    temp->next=head;
}


void display(){
    
    if(head==NULL){
      cout<<"list empty";
    }
    else{
        temp=head;
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }

}

int main(){
    int ch;
    while(true){
    cout<<"1. insert node 2.dislay"<<endl;
    cin>>ch;
    if(ch==1){
        createCLL();
    }
    else if(ch==2){
        display();
    }
    else{
        cout<<"invalid input"<<endl;
    }
    }
}