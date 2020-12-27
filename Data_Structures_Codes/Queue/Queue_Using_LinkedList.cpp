#include<iostream>
#include<stdlib.h>

using namespace std;

void enqueue();
void dequeue();
void peek();
void display();

struct node
{
    int data;
    struct node *next;

};

struct node *front=NULL;
struct node *rear=NULL;
int x;

int main(){
     while(true){
        int ch;
        cout<<"press 1.enqueue 2.dequeue 3.display 4.peek "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            cout<<"invalid input "<<endl;
            break;
        }

    }
}

void enqueue(){
    cout<<"enter data = "<<endl;
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->next=NULL;

    if(front==NULL && rear==NULL){
       front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
        front=front->next;
        free(temp);
    }
}

void display(){
    struct node *temp;
      temp=front;
    if(front==NULL && rear==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
      
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void peek(){
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"peek element is = "<<front->data<<endl;
    }
}