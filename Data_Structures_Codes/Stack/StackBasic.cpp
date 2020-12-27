#include<iostream>
#include<stdlib.h>

using namespace std;

int stack[4]={10,2,30,4};
int top=0;
int data;

int isFull(){
    if(top==4){
        return 0;
    }
    else{
        return 1;
    }
}

isEmpty(){
    if(top==0){
        return 0;
    }
    else{
        return 1;
    }

}
void push(){
    cout<<"insert data in stack ";
    cin>>data;

    int res=isFull();
    if(res==1){
        stack[top]=data;
        top++;
    }
    else{
        cout<<endl<<"stack is full "<<endl;
    }
}

void pop(){
    int res=isEmpty();
    if(res==1){
        top--;
    }
    else{
        cout<<"stack is empty "<<endl;
    }
}

void display(){
    if(top==-1){
        cout<<"no elemnt in stack "<<endl;
    }
    else{
        for(int i=0;i<top;i++){
        cout<<stack[i]<<" "<<endl;
        }
    }
    
}


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
    
        default:
            cout<<"invalid input "<<endl;
            break;
        }

    }

}