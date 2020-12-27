// #include<iostream>
// #include<stdlib.h>

// using namespace std;


// class stk{
//     int N=4;
//     int *stack;
//     int top=-1;

//     public:
//     stk(){
//         stack=new int[4];
//     }
//     void push(){
//     int x;
//     cout<<"enter data in stack = ";
//     cin>>x;
//     if(top==N-1){
//         cout<<"stack is full u cant add data"<<endl;
//     }
//     else{
//         top++;
//         stack[top]=x;
//     }
//     }


// void pop(){
//     int item;
//     if(top==-1){
//         cout<<"stck is empty";
//     }
//     else{
//         item=stack[top];
//         top--;
//         cout<<"poped item is = "<<item<<endl;
//     }
// }

// void peek(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//         cout<<"top item = "<<stack[top];
//     }
// }

// void display(){
//     for(int i=top;i>=0;i--){
//         cout<<stack[i]<<endl;
//     }

// }
// };





// int main(){
//     stk o;
//    while(true){
//         int choice;
//        cout<<"push element press 1 "<<endl;
//        cout<<"pop element press 2 "<<endl;
//        cout<<"display element press 3 "<<endl;
//        cout<<"peek element press 4 "<<endl;
//        cin>>choice;
//        switch (choice)
//        {
//        case 1:
//            o.push();
//            break;
        
//         case 2:
//            o.pop();
//            break;

//         case 3:
//            o.display();
//            break;

//         case 4:
//            o.peek();
//            break;

//         case 5:
//            exit(0);
//            break;   
       
//        default:
//        cout<<"invalid choice "<<endl;
//            break;
//        }

//    }
// }
#include<iostream>
#include<stdlib.h>

using namespace std;

void push();
void pop();
void peek();
void display();
void initial(int n);

 int N;
int choice;
int *arr;

int top=-1;

void initial(int n){
arr=new int[n];
N=n;
}
void push(){
    int x;
    cout<<"enter data in stack = ";
    cin>>x;
    if(top==N-1){
        cout<<"stack is full u cant add data"<<endl;
    }
    else{
        top++;
        arr[top]=x;
    }

}

void pop(){
    int item;
    if(top==-1){
        cout<<"stck is empty";
    }
    else{
        item=arr[top];
        top--;
        cout<<"poped item is = "<<item;
    }
}
void peek(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top item = "<<arr[top];
    }
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<endl;
    }

}
int main(){
    cout<<"enter array size ";
    int y;
    cin>>y;
    initial(y);
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

