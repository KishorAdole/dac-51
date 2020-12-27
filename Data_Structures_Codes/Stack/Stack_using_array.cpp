#include<iostream>
#include<stdlib.h>

using namespace std;
#define N 4

void push();
void pop();
void peek();
void display();

int choice;
int top=-1;
int stack1[N];

void push(){
    int x;
    cout<<"enter data in stack = ";
    cin>>x;
    if(top==N-1){
        cout<<"stack is full u cant add data"<<endl;
    }
    else{
        top++;
        stack1[top]=x;
    }

}

void pop(){
    int item;
    if(top==-1){
        cout<<"stck is empty";
    }
    else{
        item=stack1[top];
        top--;
        cout<<"poped item is = "<<item<<endl;
    }
}
void peek(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top item = "<<stack1[top];
    }
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<stack1[i]<<endl;
    }

}
int main(){
  
   while(true){

       cout<<"push element press 1 "<<endl;
       cout<<"pop element press 2 "<<endl;
       cout<<"display element press 3 "<<endl;
       cout<<"peek element press 4 "<<endl;
       cin>>choice;
       switch (choice)
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
       cout<<"invalid choice "<<endl;
           break;
       }
   }
  

}
