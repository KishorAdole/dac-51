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

node * deleteAtBeg(node *head)
{
    node *ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}

node * deleteAtIndex(node *head,int index)
{
    node *p=head;
    node *q=head->next;

    for (int i = 0; i < index-1; i++)
    {
       p=p->next;
       q=q->next;
    }
    p->next=q->next;
    free(q);

    return head;
}

node *deleteAtEnd(node *head)
{
    node *p=head;
    node *q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
   // free(q);

    return head;
}
node *deleteNodeWithValue(node *head,int value)
{
  node *p=head;
  node *q=head->next;

  while(q->data!=value && q->next!=NULL)
  {
      p=p->next;
      q=q->next;
  }
  if(q->data == value){
    p->next=q->next;
    free(q);
  }
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
     //n1=deleteAtBeg(n1);
      //  deleteAtIndex(n1,3);
     // n1=deleteAtEnd(n1);
     deleteNodeWithValue(n1,20);

    cout<<endl<<"linked list after ====>"<<endl;
      traverse(n1);
    return 0;
}
