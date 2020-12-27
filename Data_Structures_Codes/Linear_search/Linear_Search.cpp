#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[]={10,20,30,40};
int data;
int flag=0;
int main(){
    cout<<"enter the number you wnat to search ";
    cin>>data;

    for(int i=0;i<4;i++){
        if(arr[i]==data){
            cout<<"element at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"element not found ";
    }

}