#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

 int data;

struct node* firstnode(int input){
    struct node *n1=(struct node*)malloc(sizeof(struct node*));
    n1->data=input;
    n1->next=NULL;
    return n1;

}
struct node* createnode(int input){
    struct node *n2=(struct node*)malloc(sizeof(struct node*));
    n2->data=input;
    n2->next=NULL;
    return n2;
}

void connection(struct node * n1,struct node *n2){
    n1->next=n2;
}

void traverse(struct node *temp){
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
int main(){
    struct node *d1=firstnode(10);
    struct node *d2=createnode(20);
    struct node *d3=createnode(30);
    struct node *d4=createnode(40);
    connection(d1,d2);
    connection(d2,d3);
    connection(d3,d4);
    traverse(d1);

}