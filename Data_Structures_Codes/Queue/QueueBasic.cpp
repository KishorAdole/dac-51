#include<iostream>
#include<stdlib.h>

using namespace std;

int queue[4]={10,2,30,4};
int front=0,rear=0;
int data;

int isFull(){
    if(rear==4){
     return 0;
    }
    else{
        return 1;
    }
}

int isEmpty(){
    if(front==rear){
       return 0;
    }
    else{
        return 1;
    }

}
void enqueue(){
    cout<<"insert data in queue ";
    cin>>data;

    int res=isFull();
    if(res==1){
        queue[rear]=data;
        rear++;
    }
    else{
        cout<<endl<<"stack is full "<<endl;
    }
}

void dequeue(){
    int res=isEmpty();
    if(res==1){
        front++;
    }
    else{
        cout<<"stack is empty "<<endl;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"no elemnt in stack "<<endl;
    }
    else{
        for(int i=front;i<rear;i++){
        cout<<queue[i]<<" "<<endl;
        }
    }
    
}


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
    
        default:
            cout<<"invalid input "<<endl;
            break;
        }

    }

}