#include<iostream>
#include<stdlib.h>

using namespace std;

void push();
void pop();
void peek();
void display();

struct node
{
    int data;
    struct node *next;
};

int x;
struct node *top=NULL,*temp;

int main(){
    while(true){
        int ch;
        cout<<"press 1.push 2.pop 3.display 4.peek "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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

void push(){
    cout<<"enter data ";
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop(){
    temp=top;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"poped element is "<<top->data<<endl;
        top=top->next;
        free(temp);
    }
}

void display(){
   
    temp=top;
    if(temp==NULL){
        cout<<"stack is empty "<<endl;
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void peek(){
    if(top==NULL){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"top element is "<<top->data<<endl;
    }
}

