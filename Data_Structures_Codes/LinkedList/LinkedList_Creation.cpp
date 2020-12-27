#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

   struct node *head,*newnode,*temp;

int main(){
    int x;
    int choice;

    head=(struct node *)malloc(sizeof(struct node *));
    cout<<"enter data in firstnode= ";
    cin>>x;
    head->data=x;
    head->next=NULL;

    temp=head;
    cout<<"do you wants to add new node so press 1"<<endl;
    cin>>choice;
   
    while(choice==1){
    
    struct node *newnode=(struct node *)malloc(sizeof(struct node *));
    cout<<"enter data = ";
    cin>>x;
    //temp->next=newnode;
    newnode->data=x;
    newnode->next=NULL;
    temp->next=newnode;
    temp=newnode;
    //newnode->next=

    cout<<"do you wants to add new node so press 1"<<endl;
    cin>>choice;
  
   }
    temp=head;

    cout<<"values in linkedlist";

   while(temp!=NULL){
       cout<<" "<<temp->data;
       temp=temp->next;
   
   }

}  


