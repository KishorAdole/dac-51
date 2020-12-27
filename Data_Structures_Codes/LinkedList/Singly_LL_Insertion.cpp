#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node* createnode(int input)
{
  node *newNode=new node();
  newNode->data=input;
  newNode->next=NULL;
  return newNode;
}

void connection(node *x,node *y)
{
    x->next=y;
}

void traverse(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node * InsertAtBeg(node *head,int input)
{
    node *ptr=new node();
      ptr->next=head;
      ptr->data=input;
      return ptr;
}

node *InsertAtIndex(node * head,int input,int index)
{
    node *ptr=new node();
    node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=input;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

node *InsertAtEnd(node *head,int input)
{
    node *ptr=new node();
    ptr->data=input;
    node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

node * insertAfterNode(node *head,node *prevNode,int input)
{
    node *ptr=new node();
    ptr->data=input;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

int main(){

   node *n1=createnode(10);
    node *n2=createnode(20);
     node *n3=createnode(30);
      node *n4=createnode(40);
       node *n5=createnode(50);

       connection(n1,n2);
        connection(n2,n3);
         connection(n3,n4);
          connection(n4,n5);

      cout<<endl<<"linked list before ====>"<<endl;
       traverse(n1);
     
     n1=InsertAtBeg(n1,5);
     InsertAtIndex(n1,35,4);
     n1=InsertAtEnd(n1,60);
     insertAfterNode(n1,n4,45);

    cout<<endl<<"linked list after ====>"<<endl;
     traverse(n1);
    return 0;
}
