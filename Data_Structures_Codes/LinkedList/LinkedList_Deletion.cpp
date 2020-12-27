#include<iostream>

using namespace std;
void traverse();

struct node{
    int data;
    struct node *next;
};

 int pos;static int count=0;
 struct node *head,*newnode,*temp,*rear;

int main(){
    int x;
    int choice;

    //temp=rear=head;
    while(true){
    


    cout<<"do you wants to add new node at end so press 1"<<endl;
    cout<<"do you wants to add new node at begining so press 2"<<endl;
    cout<<"do you wants to traverse so press 3"<<endl;
    cout<<"do you wants to add new node at particular position so press 4"<<endl;
    cout<<"do you wants to delete front node so press 5"<<endl;
    cout<<"do you wants to delete last node so press 6"<<endl;
    cout<<"do you wants to delete node at particular position so press 7"<<endl;
    cin>>choice;
   
    if(choice==1){
        if(head==NULL){
            head=(struct node *)malloc(sizeof(struct node *));
            cout<<"enter data in firstnode= "<<endl;
            cin>>x;
            head->data=x;
            head->next=NULL;
            temp=rear=head;
        }
        else{
            struct node *newnode=(struct node *)malloc(sizeof(struct node *));
            cout<<"enter data = ";
            cin>>x;
            newnode->data=x;
            newnode->next=NULL;
            rear->next=newnode;
            rear=newnode;
        }
    
    
   }

   else if(choice==2){
    
    struct node *newnode=(struct node *)malloc(sizeof(struct node *));
    cout<<"enter data = ";
    cin>>x; 
    newnode->data=x;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
   }

   else if(choice==3){
       temp=head;
        count=0;
     cout<<"values in linkedlist"<<endl;

    while(temp!=NULL){
    cout<<" "<<temp->data<<endl;
    count++;
     temp=temp->next;
      }
     cout<<"total count is = "<<count<<endl;
   }

   else if(choice==4){
      
        cout<<"enter the position= "<<endl;
        cin>>pos;
        if(pos>count){
            cout<<"invalid position "<<endl;
        }
        else{
              temp=head;
              int i=1;
              while(i<pos){
                  temp=temp->next;
                  i++;
              }
               struct node *newnode=new struct node();
               cout<<"enter data = ";
               cin>>x;
               newnode->data=x;
               newnode->next=temp->next;
               temp->next=newnode;
              
        }
   }

   else if(choice==5){
       temp=head;
       head=temp->next;
       free(temp);
   }

   else if(choice==6){
       temp=head;
       struct node *prvnode;
       while(temp->next!=NULL){
           prvnode=temp;
           temp=temp->next;
       }
       if(head==temp){
           head=NULL;
       }
       else{
           prvnode->next=NULL;
       }
       free(temp);
   }

   else if(choice==7){
       temp=head;
       int i;
       struct node *nextnode;
       cout<<"enter position = ";
       cin>>pos;

       while(i<pos-1){
           temp=temp->next;
           i++;
       }
       nextnode=temp->next;
       temp->next=nextnode->next;
       free(nextnode);

   }
   

}

}
    
  

